create or replace
PACKAGE Fizzbuzz  AS 

        procedure Buzz (NumRange in number default '100',
                     series1 in number default '3',                          
                     series2 in number  default '5' );
					 
					 

					  




END Fizzbuzz;
 
 
/

create or replace
PACKAGE BODY Fizzbuzz  AS 

        
        procedure Buzz (NumRange in number default '100',
                        series1 in number default '3',                          
                        series2 in number  default '5' ) AS 
							BEGIN 
							

							

   for i IN 1..NumRange
    LOOP
		 if mod ( i,series2)=0 AND mod ( i,series1)=0
     then
         dbms_output.put_line ('Fizzbuzz');
		ELSIF mod ( i,series2)=0
     then
        dbms_output.put_line ('Buzz');
		ELSIF mod ( i,series1)=0
     then
        dbms_output.put_line ('Fizz');
        else
		dbms_output.put_line (i);
        END IF;
     END LOOP;
 
      
end Buzz;  



	
        
END Fizzbuzz;

/
