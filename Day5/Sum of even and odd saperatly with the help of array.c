//Wap to accept 10 integers from the user & then calculate sum of even no and sum of odd no saperatly.

#include<stdio.h>
int main()
{
    int i,soe=0,sod=0;
    int arr[10];
    for(i=0;i<=9;i++)
    {
        printf("enter no: ");
        scanf("%d",&arr[i]);
      (arr[i]%2==0)?(soe=soe+arr[i]):(sod=sod+arr[i]);
    }
    printf("Sum of even no is: %d",soe);
    printf("\nSum of odd no is: %d",sod);
   
      return 0;
}