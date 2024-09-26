//Wap to find smallest & largest no in the list of elements.

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    if(n<=0)
     printf("Ivalid!");
    int arr[n];
    printf("Enter no: ");
    for(i=0;i<n;i++)
      {
        scanf("%d",&arr[i]);
      }
    int smallest=arr[0];
    int largest=arr[0];
    for(i=1;i<n;i++)
      {
        if(smallest>arr[i])
           smallest=arr[i];
        if(largest<arr[i])
            largest=arr[i];
      }
      printf("Sallest no=%d\nLargest no=%d",smallest,largest);
      return 0;
}