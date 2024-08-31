//Wap to accept 3 angles from the user and find its a valid triangle or not. if its a triangle them find What kind of triangle is it?

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 angle:");
    scanf("%d %d %d",&a,&b,&c);
     if(a+b+c==180)
    {
        printf("its a valid triangle\n");
        if(a==b&&b==c)
         printf("its an equilateral triangle");
        else if(a==b||b==c||c==a) 
         printf("its an isosceles triangle");
        else if(a+b==c||b+c==a||c+a==b)
         printf("its right angle triangle");
    }
    else
      printf("its not a valid triangle");
    return 0;
}