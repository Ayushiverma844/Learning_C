//Wap to ask the user to input the age.If the age given by the user is positive then print it and finish ,but if the age given by the user is negative or 0 then display an error message and again ask the user to input the age. repeat the process until the user gives positive age. 

#include <stdio.h>
int main()
{
    int age;
    input_age:
    printf("enter your age: ");
    scanf("%d",&age);
   if(age<=0)
   {
       printf("Invalid Age! Try Again\n");
       goto input_age;
   }
   printf("your age is %d",age);
   return 0;
}