//Wap to ask user to input radius and find Area & circumference of circle.

#include<stdio.h>
#include<math.h>
int main()
{
    int r;
     //ask user to intput radius.
    printf("Enter Radius:");
    scanf("%d",&r);
     //area of cirle=πr2
    printf("Area of circle is %f",3.14*pow(r,2));
     //circumference of circle=2πr
    printf("\ncircumference of circle is %f",2*3.14*r);
    return 0;
}