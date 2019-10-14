scanf("Control String",arg1,arg2);//This is the syntax for Scanf
%[*][width][modifier][type]

*[optional] -
-------------
this suppress assignment of the input field, this says read the data from the stream but ignore (not store in memory location)
width[optional] -
-----------------
this specifies max number of the character to be read. how ever if a white space or an unconvertible character, input is terminated
modifier[optional] -
--------------------
(h,l or L) which modifies the type specifier. where in h is used for unsign short int, short int, l is used for long int and unsigned long int or double value. where in L is used for long double
type - 
------
type of data that to be read.
type                        Qualifying Input
------------------------------------------------------------------------------------
%c                          Character 
%d, %i                      Integer Value
%e,%E,%f,&g,%G              Float point
%o                          Octal number
%s                          Sequence of String
%u                          Unsign integer value
%X, %X                      Hexa Decimal value


Note on Scnaf :this omit blank spaces, white spaces, new lines by user.
ex:
int numb;
scanf("%4d",&numb); // this will read the first 4 digits of the user input into the address of the memory.

-------------------------------------------------------------------------------------------------------------------
printf("Control String",arg1,arg2);//This is the syntax for printf
% [flag][width][.precision][modifier][type]

flag[optional] -
----------------
which specifies output justification like decimal point, numerical sign zero or octa or Hexa  decimal  prefix.
Flags                        Description
------------------------------------------------------------------------------------
-                           left justifying within the file width
+                           display natral number with value sign (+ or -)
#                           used for spacing like 0,x,X,O,OX for hexa or octa decimal values
0                           Left padded with 0 instead of space
width[optional] -
-----------------
this specifies the max number of characters that will be occupied, if the input is small then input value then it will be right padded and 
precision[optional] -
---------------------
this will specify the number of characters that should be printed after a decimal.
modifier[optional] - same as scanf()
type - same as scanf().


example:
x=100.34987; 
printf("%9.2f",x);
O/P:| | | |1|0|0|.|3|4|
printf("%6f",x);
O/P:it will print the whole number properly.
