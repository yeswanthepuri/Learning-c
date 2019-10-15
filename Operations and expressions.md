Operations in c are basically categorized as below.
1. Arithmetic operation
2. Relation operation
3. Equality operation
4. Logical operation
5. unary operation
6. condition operation
7. bitwise operation
8. Assignment operation
9. Comma operation
10. sizeof operation.

Arithmetic operations: Add(+),Subtract(-),Multiply(*),Division(/),Modular(%) Note: % can be only applied on int not on float or decimal this is used for getting the reminder. 
Note: it's not possible to divide number by 0, this is illegal and throws divide by zero exception.
---
Relation operations:grater(<), less(>), less and equal(<=), Grater and equal(>=), all comparison operations fall under relation operations.
---
Equality operation: Strict equals(==) and non equals (!=) equal return 1 in case if both values on LHS and RHS are equal else returns 0.
---
Logical Operations: c support 3 logical operations logical AND(&&), OR(||), NOT(!)

ex:
a   b   a&&b
0   0   0
0   1   0
1   0   0
1   1   1
-------------
a   b   a||b
0   0   0  
0   1   1
1   0   1
1   1   1
-------------
a   !a
0   1
1   0
-------------
--- 
unary operation: C supports 3 unary operators 
1. unary minus
2. increment
3. Decrement

unary minus:unary minus operator negatives the value of the operands.
ex:if a number is positive then it become negative when preceded with unary
int a,b=20;
a=-(b); O/P : a=-20
Increment and decrement: ++ and -- are 2 different unary operands.

and x++ or x-- is not same as ++x or --x where as the result remains the same please find the example:
y = x++; is equals to writing
y = x;
x=x+1;
where y= ++x; is equivalent to write.
x=x+1;
y=x;
---
conditional operator: exp1 ? exp2 : exp3;