//Wap to accept values from the user in two 2D arrays called arr&brr. Now add the no of arr&brr and store the result into third 2D array called crr. Finally display the third 2D array.

#include<stdio.h>
int main()
{
    int i,j;
    int arr[2][2],brr[2][2],crr[2][2];
    for(i=0;i<2;i++)
       {
           for(j=0;j<2;j++)
           {
               printf("enter no ");
               scanf("%d",&arr[i][j]);
           }
       }
     for(i=0;i<2;i++)
       {
           for(j=0;j<2;j++)
           {
               printf("enter no ");
               scanf("%d",&brr[i][j]);
           }
       }
      for(i=0;i<2;i++)
       {
           for(j=0;j<2;j++)
           {
            crr[i][j]=arr[i][j]+brr[i][j];
            printf("\nsum of 2 arrays is %d",crr[i][j]);
           }
       }
       return 0;
}