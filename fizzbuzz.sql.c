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
