#!/bin/sh

#function to check if the number is multiple of 3,5 and 15
ismultiple(){
    input=$1;
    if [ `expr $input % 15` == 0 ]
        then
            echo "Fizzbuzz"
            exit 1
    elif [ `expr $input % 5` == 0 ]
        then
            echo "Buzz"
            exit 1
    elif [ `expr $input % 3` == 0 ]
        then
            echo "Fizz"
            exit 1
    else
        echo "$input"
    fi
}
 
min=1;
max=100;

 
#Looping through numbers from min to max
for (( num=$min; num <= $max; num++ ));
do
numtoprint="$(ismultiple $num)"
echo "$numtoprint"
done
