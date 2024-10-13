//Wap to accept marks of three students, each having 4 subjects & find out the higest mark obtained by each student.

#include<stdio.h>
int main()
{
    int i,j,max;
    int x=0;
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
           max=0;
           for(j=0;j<4;j++)
           {
              if(arr[i][j]>max)
              {
                  max=arr[i][j];
                  x = j+1;
              }
           }
           printf("\n student%d ,higest marks=%d in subject %d",i+1,max,x);
        x = 0;
        
       }
    
       return 0;
}