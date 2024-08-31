//Wap to accept 2 integers from the user and swap value(interchange) them using 2 variables.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 integer:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d",a,b);
    return 0;
}