//First basic program that whole worlds starts with Hello World
#include<stdio.h>//Anything with # is a preprocessor it runs before anything else runs
//include command includes anything in the stdio.h header files into the code so we do not need to define functions like scanf and printf etc
int main()//Declaring main function. This is where the program starts
{
    printf("Hello World");//printf function from stdio.h anything inside "" is string and is printed directly to terminal.
    return 0;//Return 0  is a statement to return 0 at the end to let the computer know the program exited with 0 status i.e. the run was successful
}