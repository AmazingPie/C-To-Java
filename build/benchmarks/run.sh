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
	java -classpath "$curr_dir/java/" benchmark <<< '42' >> "$res_dir/java_results.txt"
done

echo "Running Asan..."
for i in $(seq 0 $run_amount)
do
        "$curr_dir/asan/benchmark" <<< '42' >> "$res_dir/asan_results.txt"
done


echo "Running C..."
for i in $(seq 0 $run_amount)
do
        "$curr_dir/c/benchmark" <<< '42' >> "$res_dir/c_results.txt"
done
