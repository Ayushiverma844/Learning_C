//Wap to accept 5 no from user and short it in accending order.

#include<stdio.h>
int main()
{
    int i,j,temp;
    int arr[5];
    for(i=0;i<5;i++)
    {
        printf("enter no ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}