//Wap to ask the user to select a figure amongst CIRCLE, RECTANGLE , TRIANGLE , SQUARE.
//Now as per the fig calculate the area and parameter.


#include<stdio.h>

int main(){
    int x,radius,l,w,h,b,a;

//Accept figure from the user..
    printf("Choose figure..\n1.Circle\n2.Rectangle\n3.Triangle\n4.Square\n");
    scanf("%d",&x);

    switch (x)
    {
    case 1 :  //If user choose circle
     
      printf("Enter radius of circle: ");  //accept radius from the user
      scanf("%d",&radius);
      printf("Area of circle is %f",3.14*radius*radius); //(area =pi*r^2)
      printf("\nCircumference is = %f",2*3.14*radius);    //(circumference = 2*pi*r)
      break;


    case 2 :  //If user choose Rectangle
     
      printf("Enter lenght and breath of rectangle "); //accept lenght and width from the user
      scanf("%d %d",&l,&w);
      printf("Area of rectangle is %d",l*w);  //(area = lenght * width)
      printf("\nParameter = %d ",2*(l+w));   //[parameter = 2*(lenght+width)]
      break;


    case 3 :  //If user choose Triangle
  
     printf("Enter height & base of triangle: "); //accept size of lenght and hieght from the user
     scanf("%d %d",&b,&h);
     printf("Area of triangle is %f ",0.5*b*h); //(area = 1/2*height*lenght)
     break;


    case 4 : //If user choose Square
      
      printf("Enter lenght of side: ");  //accept lenght od side from the user
      scanf("%d",&a);
      printf("Area of square is %d",a*a);  //Area = a^2
      printf("\nParameter is = %d",4*a);  //Parameter = 4*a
      break;


    default :
       printf("!!Wrong choice!!");
       break;

}
return 0;

}