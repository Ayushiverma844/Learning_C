//Wap to accept 3 integers from the user and calculate its sum and average.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("give 3 integer");
    scanf("%d %d %d",&a,&b,&c);
    printf("sum of no is:%d",a+b+c);
    printf("\n average is:%f",(a+b+c)/3.0);
    return 0;
}