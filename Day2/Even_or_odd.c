//Wap to accept an integer from the user & check whether it is even or not. Make sure that if 0 is entered then code should display even no.

#include<stdio.h>
int main()
{
    //accept an integer  
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    //check wheather it is even 
    if(n%2==0)
    printf("Its an even no");
    //or odd
    else
    printf("Its an odd no");
return 0;
    
}
