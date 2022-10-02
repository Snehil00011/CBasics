//Taking inputs is backbone of making any user friendly code and so the next step on this journey is to take user input.
#include<stdio.h>
int main()
{
    int num;// int is a block of code that tells compiler to reserve a memory block to take in a integer value
    printf("Enter a number\n");
    scanf("%d",&num);//Function to taake in user input. As we saw in file no. 2 , %d denotes integer so we put a placeholder as %d and then
    //store the vale of user input in num the scanf function taakes the address of num using &(address of) operator and sets the value of num
    //to the int added by the user.
    printf("You entered: %d",num);
    return 0;
}   