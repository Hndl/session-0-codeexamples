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


# Feedback by CGB
# CGB : Line 03: The naming of a function is a key activity, get the name write and its explains what it does.
# CGB : Line 04: Function name 'ismultiple' - are we checking if $1 is a multiple of 15||5||3, 
#       feels like a 'is 1 multiple of 15'? or is 1 divisable by 15?
# CGB : Line 04: Regardless of the function, the result looks spot on.
# CGB : Line 08: Well spotted on the output of both Fizz and Buzz, you have the output as per spec - Fizzbuzz.
# CGB : Line 23: its good to set constants, helps future changes easier to make. Do we need to be able to pick the
#       constants out from other variables? 
# CGB : Line 27: perhaps the comment is not required.  After all, we can see it's a loop, thoughts?
# CGB : Line 30: numtoprint - is it always a number? or is it sometimes Fizz || Buzz or Fizzbuzz.
# CGB : Line 30: And line 31 - indentation.
# CGB : Line 09: And line 13, 17 - do we need to exit 3 times in 3 different? there is no exit after the last else :) 
# CGB : Closing Statement:
#       - It's good you didnt to drawn into what the future changes could be.  I think sometimes, we can worry too
#       much about what possible changes could come in the future and over complicate the solution. 
#       - good attention to the solution as it's based on the spec.
#       - choose variable, constants, functions names with care. Get it right and the code documents itself.  
#       this is difficult to do, easier to say..
#       - Overall: good practical solution.
