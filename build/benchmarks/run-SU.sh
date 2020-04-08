#!/bin/bash

curr_dir=$(pwd)
res_dir="$curr_dir/results"

if [ $# -eq 0 ]
then
	echo "No argument provided -- defaulting to 100 runs"
	run_amount=100
else
	run_amount=$1
fi

echo $run_amount

#For some reason the following doesn't work
#rm -rf "$res_dir/*"
rm -rf $res_dir
mkdir "results"

echo "Running Java..."
for i in $(seq 0 $run_amount)
do
	java -classpath "$curr_dir/java-SU/" benchmark <<< '42' >> "$res_dir/java-SU_results.txt"
done

echo "Running Asan..."
for i in $(seq 0 $run_amount)
do
        "$curr_dir/asan-SU/benchmark" <<< '42' >> "$res_dir/asan-SU_results.txt"
done


echo "Running C..."
for i in $(seq 0 $run_amount)
do
        "$curr_dir/c-SU/benchmark" <<< '42' >> "$res_dir/c-SU_results.txt"
done
