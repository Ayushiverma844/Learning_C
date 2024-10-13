//Wap to accept an integer from the user and check wheather it is prime or not. assume that user will input no greater then 1 only.

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a no: ");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
        printf("its not a prime no");
        return 0;
        }
    }
        printf("its a prime no.");
    
    return 0;
    
}