//Wap to accept an input from the user and print sum of all no from 1 to that no.assume that user will input positive no only.

#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a no:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
printf("sum is %d",sum);
    return 0;
}