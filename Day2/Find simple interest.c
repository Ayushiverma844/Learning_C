//wap to ask the user to input principal,rate and time. calculate simple interest, Assume p,r,t will be unsigned int.

#include<stdio.h>
int main()
{
    unsigned int p,r,t;
    printf("give principal amount,rate of interest and time in year:");
    scanf("%u %u %u",&p,&r,&t);
    // simple interest= (P × R × T) / 100
    printf("simple interest is %f",(p*r*t)/100.0);
    return 0;
}