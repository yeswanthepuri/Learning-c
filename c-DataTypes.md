Data Types: Specifies how we enter data into our program and what type of data we enter. C has some Pre defined set of data types.
Primary data:
-------------
they are fundamental data types in c namely 
1. Integer(int): 
Type	Size(bytes)	Range
int or signed int	2	-32,768 to 32767
unsigned int	2	0 to 65535
short int or signed short int	1	-128 to 127
unsigned short int	1	0 to 255
long int or signed long int	4	-2,147,483,648 to 2,147,483,647
unsigned long int	4	0 to 4,294,967,295
2. Floating Point (float): 
Type	Size(bytes)	Range
Float	4	3.4E-38 to 3.4E+38
double	8	1.7E-308 to 1.7E+308
long double	10	3.4E-4932 to 1.1E+4932
3. Character(char): 
Type	Size(bytes)	Range
char or signed char	1	-128 to 127
unsigned char	1	0 to 255
4. Void : Void mean nothing, This is actually used as function return type.
----------------------------------------------------------------------------
Derived types:
----------------
Derived types are basically primary types which are grouped or slightly twisted
ex:array, structures, union ,pointers.
--------------------------------------------------------------------------------
Variables: when we want to store any information in our computer insturd of remembering the whole complex address our operating system will allow us to create and name them, so that it become easy for us to remember. Similar in C when we want to use some data value we can store that in memory space so it becomes easy to access.

Datatype of Variable
-------------------
A variable in C language must be given a type, which defines what type of data the variable will hold.

It can be:

char: Can hold/store a character in it.
int: Used to hold an integer.
float: Used to hold a float value.
double: Used to hold a double value.
void
----------------------------------------------
Rules to name a Variable
-------------------------
Variable name must not start with a digit.
Variable name can consist of alphabets, digits and special symbols like underscore _.
Blank or spaces are not allowed in variable name.
Keywords are not allowed as variable name.
Upper and lower case names are treated as different, as C is case-sensitive, so it is suggested to keep the variable names in lower case.
----------------------------------------------------------------------------------------------------------------------
Declaring, defining and Initializing a variable:
--------------------------------------------------
Declaration of variable should be done before initialization.
1. it tell compiler what the variable name is.
2. it tell what type of data type will the compiler  hold.
3. until the variable is declared compiler is not worried about the memory.
4. decleration is mostly like telling the compiler there exist a variable that follow data type which is used in the program.
5. extern is used for the variables out of main program.
 ex: extern int a;
 Normal c Variable in main method int a,b;
 -------------------------------------------------------------------------
 Escape Sequence:
 --------------
 escapesequence purpose
 \a             Audible Signal
 \b             Back space
 \t             Tab
 \n             New line
 \v             Vertical tab
 \f             new page/ Clear screen
 \r             Carriage return
 -----------------------------------------------------------------------
 printf("\n welcome to c\n");
 O/P: 
 ..old instance stops
welcome to c
 ..start of new line.
 -----------------------------------------------------------------------
 Control string specifier the type of formate of data that has to be obtained from the args
 the propttype of the control string can be given as
 %[*][width][modifier]type
 *: supports assignment of the input field. and it tells it should be read from the stream  but ignore(not store in the memory location)
 width: this is optional argument that specifies the max number of character to be read. in case if scanf function encounter a white space or an unconvertible character input is terminated.
 modifier: is an optional argument(h,l or L) where modifier h is used for short int or unsigned short int,l is used for long int,unsigned long int, or double value finally L is used for longint
 type:type of data that has to be read

 Type                   Qualifying Input
 %c                     for single character
 %d,%i                  for integer character
%e,%E,%f,%g,%G          for float point number
%O                      for Octal number
%s                      for a sequence of (String of) character
%u                      or unsigned integer value
%x,%X                   for Hexadecimal value.

 
