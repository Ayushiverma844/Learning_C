//Wap to ask the user to input no cotinuously until 0 is entered. as soon as the user input 0, your code should stop accepting no and should display the sum of all the no entered before 0. make sure if user input negative no then did no add it in sum.

#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter no and press 0 to stop: ");
    for( ; ;)
    {
      scanf("%d",&n);
      if(n<0)
       continue;
      if(n==0)
        break;
        sum=sum+n;
    }
  printf("sum is %d",sum);
  return 0;
}