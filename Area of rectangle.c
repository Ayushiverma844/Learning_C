#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter lenght and breadth:");
    scanf("%d %d",&l,&b);
    printf("Area of rectangle is %d",l*b);
    printf("\nparameter of rectangle is %d",2*(l+b));
    return 0;
}