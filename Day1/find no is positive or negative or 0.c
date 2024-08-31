#include<stdio.h>
int main()
{
    int i;
    printf("Enter a integer except 0:");
    scanf("%d",&i);
    if(i>0)
      printf("its a positive no.");
    else if(i<0)
      printf("its a negative no.");
    else
      printf("its zero");  
    return 0;
}
