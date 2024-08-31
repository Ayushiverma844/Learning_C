#include<stdio.h>
#include<math.h>
int main()
{
    int r;
    printf("Enter Radius:");
    scanf("%d",&r);
    printf("Area of circle is %f",3.14*pow(r,2));
    printf("\ncircumference of circle is %f",2*3.14*r);
    return 0;
}