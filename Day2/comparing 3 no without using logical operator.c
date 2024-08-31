//Wap to accept 3 integers from the user and compare them which one is greatest without using logical operator.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 integer :");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
       if(a>c)
       printf("%d is greatest",a);
       else 
       printf("%d is greatest",c);
    }
    else  if(b>a)
     {
       if(b>c)
       printf("%d is greatest",b);
       else
       printf("%d is greatest",c);
     }
    else
      printf("all are equal");
    return 0;
}