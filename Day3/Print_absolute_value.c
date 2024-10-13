//Wap to accept an integer from the user and print its absolute value.

#include <stdio.h>

int main()
{
    int a;
    printf("enter a no: ");
    scanf("%d",&a);
    (a>=0)?(printf("abs value is %d",a)):(printf("%d",-1*a));
    return 0;
}