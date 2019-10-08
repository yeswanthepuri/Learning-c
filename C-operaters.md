C language supports a rich set of operates, Operates are a symbols used to perform arithmetical or logical manipulation.

Types of operations:
1.Arithmetical operations
2.Relational operations.
3.Logical operations.
4.Bitwise Operations.
5.Assignment operation.
6.Conditional Operations.
7.Special Operations.

Arithmetical operations:
------------------------
Operator	Description
+	adds two operands
-	subtract second operands from first
*	multiply two operand
/	divide numerator by denominator
%	remainder of division
++	Increment operator - increases integer value by one
--	Decrement operator - decreases integer value by one

Relational operators:
---------------------
Operator	Description
==	Check if two operand are equal
!=	Check if two operand are not equal.
>	Check if operand on the left is greater than operand on the right
<	Check operand on the left is smaller than right operand
>=	check left operand is greater than or equal to right operand
<=	Check if operand on left is smaller than or equal to right operand

Logical Operations:
-------------------
Operator	Description	Example
&&	Logical AND	(a && b) is false
||	Logical OR	(a || b) is true
!	Logical NOT	(!a) is false

Bit wise operation:
-------------------
Operator	Description
&	Bitwise AND
|	Bitwise OR
^	Bitwise exclusive OR
<<	left shift
>>	right shift
--------------------------------------------
Example of left shift and right shift:
a=0001000
b=2
a<<b = 0100000
a>>b = 0000010
--------------------------------------------
a	b	a & b	a | b	a ^ b
0	0	0	0	0
0	1	0	1	1
1	0	0	1	1
1	1	1	1	0
--------------------------------------------
Assignment operations:
---------------------
Operator	Description	Example
=	assigns values from right side operands to left side operand	a=b
+=	adds right operand to the left operand and assign the result to left	a+=b is same as a=a+b
-=	subtracts right operand from the left operand and assign the result to left operand	a-=b is same as a=a-b
*=	mutiply left operand with the right operand and assign the result to left operand	a*=b is same as a=a*b
/=	divides left operand with the right operand and assign the result to left operand	a/=b is same as a=a/b
%=	calculate modulus using two operands and assign the result to left operand	a%=b is same as a=a%b
-------------------------------------------------------------------------
Conditional Operation:
----------------------
1.Ternary Operation.
2.?: Operation.
---------------------
Special Operated:
--------------------
Operator	Description	Example
sizeof	Returns the size of an variable	sizeof(x) return size of the variable x
&	Returns the address of an variable	&x ; return address of the variable x
*	Pointer to a variable	*x ; will be pointer to a variable x