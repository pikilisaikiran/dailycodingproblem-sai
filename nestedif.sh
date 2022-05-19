#!/usr/bin/bash 
read -r m
echo -e "Please Enter Physics Marks: \c"
read -r p
echo -e "please enter chemisty marks: \c"
read -r c
if [ $m -ge 35 -a $p -ge 35 -a $c -ge 35 ]; then
total=`expr $m + $p + $c`
avg=`expr $total / 3`
echo "Total marks = $total"
echo "Average Marks =$avg"
	if [ $avg -ge 75 ]; then
	echo "Distinction"
	elif [ $avg -ge 60 -a $avg -lt 75 ]; then
	echo "First"
	else
	echo "Good marks"
	fi
else
echo "Sorry you Failed"
fi
