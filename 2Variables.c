//Variables are a unique name given to a memory location that can store certain values.
#include<stdio.h>
int main()
{
    //Variables follow a set of rules that is defined by its data type.
    //Data types determines what type of data can a variable have we have many data types in c such as
    //int->integer; char->character,float->floating point numbers;etc..
    int num=10;
    char ch='c';
    float fl=13.36;
    printf("integer: %d; Float: %f; char: %c;",num,fl,ch);
    //the printf functions take %d, %f and %c as placeholders for various data types
    //output: integer: 10; Float: 13.360000; char: c;
    return 0;
}