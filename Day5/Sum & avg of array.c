//Wap to accept 10 integers from the user & then print sum & average of all the array elements on the  screen.

#include<stdio.h>
int main()
{
    int i,n,sum;
    int arr[10];
    for(i=0;i<=9;i++)
    {
        printf("enter no: ");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum is %d",sum);
    printf("\nAvg is %f",(float)sum/10);
      return 0;
}