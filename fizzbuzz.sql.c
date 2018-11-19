Technology:SQL
select case
    when mod(level,15)=0 then 'FizzBuzz'
    when mod(level,3)=0 then 'Fizz'
    when mod(level,5)=0 then 'Buzz'
    else to_char(level)
    end as Results
from dual
connect by level <= 100;



Technology:SQL
select case
    when remainder(level,15)=0 then 'FizzBuzz'
    when remainder(level,3)=0 then 'Fizz'
    when remainder(level,5)=0 then 'Buzz'
    else to_char(level)
    end as Results
from dual
connect by level <= 100;


Technology:PLSQL
BEGIN
    FOR i IN 1..100 LOOP
        IF remainder(i,3) = 0 AND remainder(i,5) = 0 THEN
            dbms_output.put_line('FizzBuzz');
        ELSIF remainder(i,3) = 0 THEN
            dbms_output.put_line('Fizz');
        ELSIF remainder(i,5) = 0 THEN
            dbms_output.put_line('Buzz');
        ELSE
            dbms_output.put_line(i);
        END IF;
    END LOOP;
END;



Technology:Bash Shell
#!/bin/bash
for ((i=1;i<=100;i++));
do
    if ((i%15==0)); then
        echo "FizzBuzz"
    elif ((i%3==0)); then
        echo "Fizz"
    elif ((i%5==0)); then
        echo "Buzz"
    else
        echo $i
    fi
done


Technology:C Language
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int i;
  for (i = 1; i <= 100; i += 1)
    {
      if (i % 15 == 0)
	    { printf ("FizzBuzz"); }
      else if (i % 5 == 0)
	    { printf ("Buzz"); }
      else if (i % 3 == 0)
	    { printf ("Fizz"); }
      else
	    { printf ("%d",i); }
    printf("\n");
    }
  return 0;
}
/*
# CGB - Line 58: - 64 : Do we need the comments? Do they add to the solution?
# CGB - Line 72: 74,76 Repetition - not normally what we aim for in code, but the soloution is simple
#		 I find that DRY - Dont repeat yourself can lead to complicating the soloution...
# CGB	Line 73: Spec says 'Fizzbuzz' not FizzBuzz. Beware, even in simple code there is risk for a defect.
# CGB 	Line 73: Indentation - of the {, does it read clearly ?
# CGB 	Line 80: Additonal lines after the fact - could add \n to Line 79,77 & 75.
# CGB 	Line 69: i is in scope for the entire main function.  If declared as part of line 70, 
#		 i would of only been in-scope for the for loop.
# CGB	Line 70: the general notion for simple single increment is int++ but int+=1 works fine 
#
# Need to Clarify My C on the following
#
# CGB	Line 67: main isnt an int, it's a void.
# CGB	Line 67: main has 2 args. int argc, and char *argv
# CGB	Line 82: dont normally return from main. exit is the way to end, this will ensure a return code 
#		 is supplied to the command line
#		 and you can use $? to query the exit code of an application.
# CGB 	Line 69: ideally we should init vars, on this occassion it is init on line 72. so, no harm done.

# Closing Comment
#	- great to see C, thanks for using it.
#	- I suspect some of my history of this language has changed so comments below line 93
#	  where historically accurate, and probably still are but I need to check.
#	- solution is functional and works. The layout could be clearer and there is the defect on line 73.
#	- good attempt  
*/
