create or replace
PACKAGE MULTIPLE_THREE_FIVE AS 

  /* TODO enter package declarations (types, exceptions, methods etc) here */ 
  
  PROCEDURE MULTIPLEVALUES(dummy in number);

END MULTIPLE_THREE_FIVE;

/

create or replace
PACKAGE BODY MULTIPLE_THREE_FIVE AS

  PROCEDURE MULTIPLEVALUES(dummy in number) AS
 
   MultipleOfThree BOOLEAN := FALSE;
   MultipleOfFive BOOLEAN := FALSE;
 
BEGIN
 
   FOR i IN 1 .. 100
   LOOP
 
      MultipleOfThree := MOD(i, 3) = 0;
      MultipleOfFive := MOD(i, 5) = 0;
 

 
         IF MultipleOfThree AND MultipleOfFive THEN
 
            dbms_output.put_line('FizzBuzz');
 
         ELSIF MultipleOfThree THEN
 
            dbms_output.put_line('Fizz');
 
         ELSIF MultipleOfFive THEN
 
            dbms_output.put_line('Buzz');
 
         ELSE
 
            dbms_output.put_line(i);
        END IF;
 
   END LOOP;
   
  END MULTIPLEVALUES;

END MULTIPLE_THREE_FIVE;

/
