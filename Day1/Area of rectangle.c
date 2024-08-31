//wap to accept lenght & breadth of a rectangle from user & calculate its area and perimeter.

#include<stdio.h>
int main()
{
    int l,b;
     //ask to input lenght and breadth.
    printf("Enter lenght and breadth:");
    scanf("%d %d",&l,&b);
    //area of rectangle=l*b.
    printf("Area of rectangle is %d",l*b);
    //perimeter of rectangle 2(Length + beadth)
    printf("\nparameter of rectangle is %d",2*(l+b));
    return 0;
}