#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    //i<=5 will print 5 row
    {
        for(j=1;j<=4;j++)
    //j<=4 will print 4 column.  
        {
            printf("*");
        }
        printf("\n");
    }
return 0;
}