// Wap to accept a no from the user and check wheather it is an armstrong no or not.

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