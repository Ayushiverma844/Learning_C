// Problem Statement:
// Write a C program to accept a number from the user and check whether it is an Armstrong number or not.

// Example:
// Input: 153
// Output: It's an Armstrong number.

// Input: 123
// Output: It's not an Armstrong number.

// Note:
// An Armstrong number (also known as a Narcissistic number) is a number
//  where the sum of its digits raised to the power of the number of digits equals the original number.
//  For example, 153 = 1³ + 5³ + 3³ = 153.









#include<stdio.h>
int main()
{
    int n,sum,r,x;
    printf("Enter a no");
    scanf("%d",&n);
    x=n;
    for(sum=0;n>0;n=n/10)
    {
        r=n%10;
        sum=sum+r*r*r;
    }
    if(sum==x)
    printf("its an armstrong no.");
    else
    printf("its not an armstrong no");
    return 0;
}