//Wap to accept a integers from the user & then calculate sum of even no and sum of odd no from 1 to that no saperatly.
//Assume user will input only positive no.

#include<stdio.h>

int main()
{
    int n,soe=0,sod=0;
    printf("Enter a positive no: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      (i%2==0)?(soe=soe+i):(sod=sod+i);
    }
    printf("Sum of even no is: %d",soe);
    printf("\nSum of odd no is: %d",sod);
   
      return 0;
}