/*C has many built-in operators and can be classified into 6 types:

Arithmetic Operators
Relational Operators
Logical Operators
Bitwise Operators
Assignment Operators
Other Operators
 

Arithmetic Operators: 
These operators are used to perform arithmetic/mathematical operations on operands. Examples: (+, -, *, /, %,++,–)
These are of two types : unary(Single operand)(++,--,etc) and binary(two operands)(+,-,*,/,etc)


Relational Operators:
These are used for the comparison of the values of two operands.(==, >= , <= )


Logical Operators: 
Operators that perform logical operations such as logical AND(&&) logical OR (||) etc.

Bitwise Operators: 
The Bitwise operators are used to perform bit-level operations on the operands. eg &,^,etc.


Assignment Operators: 
Assignment operators are used to assign value to a variable.
“=”
“+=”
“-=” 
“*=”
“/=”


Other Operators: 
Apart from the above operators, there are some other operators available in C used to perform some specific tasks.
Eg:
 sizeof operator
 Comma Operator
 Conditional Operator condition? true: false
 etc
*/

#include<stdio.h>
int main()
{
    int a=10,b=10,c=15;//Assignment operator
    printf("Arithmatic +: %d\n",a+b);
    printf("Arithmatic -: %d\n",a-b);
    printf("Arithmatic *: %d\n",a*b);
    printf("Arithmatic /: %d\n",a/b);
    printf("----------------------------\n");
    printf("Arithmatic ++a: %d\n",++a);//Increment a then print the value
    printf("Value of a: %d\n",a);
    a=10;
    printf("Arithmatic a++: %d\n",a++);//print a then increment the value
    printf("Value of a: %d\n",a);
    a=10;
    printf("Arithmatic --a: %d\n",--a);
    printf("Value of a: %d\n",a);
    a=10;
    printf("Arithmatic a--: %d\n",a--);
    printf("Value of a: %d\n",a);
    a=10;
    printf("----------------------------\n");
    printf("Logical operator and relational operator: %d\n",(a==b)&&(a==c));//Prints 0 if false prints 1 if true
    printf("Logical operator and relational operator: %d\n",(a==b)||(a==c));//Prints 0 if false prints 1 if true
    printf("----------------------------\n");
    a+=15;//Assignment operator += here a+=15 expands to a=a+15
    printf("Value of a:%d\n",a);
    printf("----------------------------\n");
    printf("Size of int: %d\n",sizeof(a));//Sizeof returns the size of the operand
    printf("Size of float: %d\n",sizeof(float));//Sizeof returns the size of the operand
    printf("Size of double: %d\n",sizeof(double));//Sizeof returns the size of the operand
    printf("Size of char: %d\n",sizeof(char));//Sizeof returns the size of the operand
    printf("----------------------------\n");
    return 0;
}