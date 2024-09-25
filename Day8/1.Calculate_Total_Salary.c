//A company provides 10% of the basic saraly as TA(touring allowance) and 20% of the basic salary as HRA(house rent).
//WAP to ask the user to input his basic salary & calculate his total salary.
//Assume basic salary is unsinged int.


#include<stdio.h>

int main()
{

unsigned int x;

//Accept basic salary from the user..
printf("Enter your basic salary: ");
scanf("%u",&x);

//calculate TA & Hra..

//TA = 10% of x means (x*0.1)...
printf("Your TA is %f\n",x*0.1);

//HRA = 20% of x means (x*0.2)...
printf("And\nHRA is %f\n",x*0.2);

//Total salary = basic salary + TA + HRA..
printf("Total salary is %f",x+(x*0.1)+(x*0.2));

return 0;
    
}
