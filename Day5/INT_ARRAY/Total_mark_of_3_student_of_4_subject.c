//Wap to accept marks of three students, each having 4 subjects & find out the total mark obtained by each student.

#include<stdio.h>
int main()
{
    int i,j,sum;
    int arr[3][4];
    for(i=0;i<3;i++)
       {
           for(j=0;j<4;j++)
           { 
                printf("enter mark of student%d of sub%d:",i+1,j+1);
               scanf("%d",&arr[i][j]);
           }
       }
       for(i=0;i<3;i++)
       {
           sum=0;
           for(j=0;j<4;j++)
           {
              sum=sum+arr[i][j];
           }
           printf("\n student%d ,total marks=%d",i+1,sum);
       }
    
       return 0;
}