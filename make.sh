#!/bin/bash

curr_dir=$(pwd)

if [ $# -ne 2 ]
then
	echo "Please provide arguments as follows:
	libs_dir = path/to/liballocs+libcrunch+toolsub
	source_file = path/to/file.c"
	exit 1
else
	cilpp_dir="$1/toolsub/cilpp"
	liballocs_dir="$1/liballocs"
	libcrunch_dir="$1/libcrunch"
	source_file="$2"
	target_file="$curr_dir/build/${source_file##*/}"		#get just filename
fi

plugin_args="-Wp,-plugin,$liballocs_dir/tools/lang/c/cilallocs/cilallocs.cmxs,-plugin,$libcrunch_dir/frontend/c/ptrintarith/ptrintarith.cmxs"

echo $run_amount

cp "$curr_dir/src/cilpp.ml" "$cilpp_dir/src"
cd "$cilpp_dir/src"
sudo "CIL_INSTALL=$liballocs_dir/tools/lang/c/cil/lib" make
cd "$curr_dir"
gcc `$cilpp_dir/bin/cilpp-cflags` -E "$source_file" -o "$target_file" "$plugin_args" "-Wp,-fpass-ptrintarith" "-std=c11"
echo -e "\nDone!"