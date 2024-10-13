//Wap to accept an integer from the user and using ternary operator check whether it is even or odd.

#include<stdio.h>
int main()
{
    int n;
    printf("enter an integer: ");
    scanf("%d",&n);
    (n%2==0)?(printf("Its an even no")):(printf("Its an odd no"));
    return 0;
}