//Wap to accept an integer from the user & check whether it is a multiple of 2 only or multiple of 3 only or a multiple of both 2 and 3 or nethier of 2 nor 3.

#include<stdio.h>
int main()
{
    int n;
    printf("enter a no:");
    scanf("%d",&n);
    if(n%2==0 && n%3!=0)
    printf("its multiple of 2 only");
    else if(n%3==0 && n%2!=0)
    printf("its multiple of 3 only");
    else if(n%2==0 && n%3==0)
    printf("its multiple of both 2&3");
    else
    printf("its nethier a multiple of 2 nor 3");
return 0;
    
}