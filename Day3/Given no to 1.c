//Wap to accept an integer from the user and print all the no from that no to 1. Assume that user will input positive no only.

#include<stdio.h>
int main()
{
 int n;
 printf("Enter a no:");
 scanf("%d",&n);
 while(n>=1)
 {
     printf("\n%d",n);
     n=n-1;
 }
 printf("\nDone!");
}