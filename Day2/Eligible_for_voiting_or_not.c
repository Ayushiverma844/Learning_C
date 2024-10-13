//Wap to accept age from the user & check whether the user is eligible for voting or not. Make sure that if the age inputed is 0 or negative the program should display the message "Invalid Age". 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter your age:");
    scanf("%d",&n);
    if(n>=18)
    printf("You are eligible for voting");
    else if(n>0 && n<18)
    printf("You are not eligible for voting");
    else
    printf("Invalid Age");
return 0;
    
}