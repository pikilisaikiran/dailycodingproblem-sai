#!/bin/bash
test () {
	if [ $1 -eq 1 ]; then
	echo  "Addition of the two numbers is  $(($2 + $3))"
	elif [ $1 -eq 2 ]; then
	echo  "Subtraction of the two number is $(($2 - $3))"
	elif [ $1 -eq 3 ]; then
	echo  "Multiplication of the two number is $(($2 * $3))"
	fi
}
echo "Enter two numbers"
read -r a
read -r b
echo "for addition of the numbers enter 1"
echo 'for subtraction of the numbers enter 2'
echo 'for multiplication enter 3'
read -r ch
test $ch $a $b
