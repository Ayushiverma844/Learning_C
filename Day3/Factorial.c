//Wap to accept a no from the user and print its factorial. Make sure if user input 0 then your code should be display 1.

#include<stdio.h>
int main()
{
    int n,f=1;
    printf("Enter a no:");
    scanf("%d",&n);
    while(n>1)
    {
        f=f*n;
        n--;
    }
    printf("Factorial is %d",f);
    return 0;
}