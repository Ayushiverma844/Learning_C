//Wap to accept 5 integers from the user & then print them back on screen.

#include<stdio.h>
int main()
{
    int i,n;
    int arr[5];
    for(i=0;i<=4;i++)
    {
        printf("enter no: ");
        scanf("%d",&arr[i]);
    }
    printf("you inputed: \n");
    for(i=0;i<=4;i++)
    {
     printf("\n %d",arr[i]);
      }
      return 0;
}