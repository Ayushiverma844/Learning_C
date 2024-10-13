//Wap to accept an integer from the user and print all the no from 1 to that no. Assume that user will input positive no only.

#include<stdio.h>
int main()
{
 int n,i=1;
 printf("Enter a no:");
 scanf("%d",&n);
 while(i<=n)
 {
     printf("\n%d",i);
     i=i+1;
 }
 printf("\nDone!");
}