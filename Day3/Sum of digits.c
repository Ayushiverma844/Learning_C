//Wap to accept an integer from the user and calculate the sum of the digits of that no. 

#include <stdio.h>
int main()
{
    int n,sum=0,r;
    printf("enter a no:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
printf("sum is %d",sum);
    return 0;
}