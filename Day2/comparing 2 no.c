//Wap to accept 2 integers from the user and find which one is greater or both are equal.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 integer :");
    scanf("%d %d",&a,&b);
    if(a>b)
      printf("%d is greater",a);
    else if(b>a)
      printf("%d is greater",b);
    else
      printf("Both are equal");  
    return 0;
}