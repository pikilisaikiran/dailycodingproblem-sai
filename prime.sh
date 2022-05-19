#!/usr/bin/bash
echo "enter a number:"
read -r n
i=2
m=$((n/2))
#echo "$m"
while [ $i -le $m ]; 
do
	if [ $((n % i)) -eq 0 ]; then
	echo "$n is not a prime number"
	exit
	fi
i=$((i + 1))
done
echo "$n is a prime number"
