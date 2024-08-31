//Addmission to a professional course is given according to the following criteria:  marks in physics >=50 & marks in maths >=60 & marks in chem >=55 &total in all three subject >=220 or total in maths and physics>=130.
   //Wap to accept marks in p,c,m from the user and find out whether the user is eligible for admission or not.
      // make sure your code dosen't use any logical operator.

#include<stdio.h>
int main()
{
    int p,c,m;
    printf("Enter marks of  p,c,m;");
    scanf("%d %d %d",&p,&c,&m);
    if(p>=50)
    {
        if(c>=55)
        {
            if(m>=60)
            {
                if((p+c+m)>=220)
                printf("you are eligible");
                else if((m+p)>=130)
                printf("you are eligible"); 
                else
                printf("you are not eligible");
            }
                else
                printf("you are not eligible");
        }
       else
       printf("you are not eligible");
    }
   else
     printf("you are not eligible");
    return 0;
} 