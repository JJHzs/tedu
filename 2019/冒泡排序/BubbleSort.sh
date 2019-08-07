#!/bin/bash
#冒泡排序
nums=($*)
count=$#
for i in  $(seq 0 $[count-1])
do 
	for j in  $(seq $[i+1] $[count -1])
	do
	  if [[ ${nums[i]} -gt ${nums[j]}  ]];then

           a=${nums[i]}
           nums[i]=${nums[j]}
           nums[j]=$a

           fi

	done
done
echo "${nums[*]}"
