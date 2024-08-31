//Wap to accept a character from the user and find its capital letter or small letter or digit or something else.

#include<stdio.h>
int main()
{
    char c;
    printf("give a character");
    scanf("%c",&c);
    
    if(c>=65 && c<=90)
    //Range of ascii value of capital letter=(65-90)
      printf("its a capital letter");
    else if(c>=97 && c<=122)
    //Range of ascii value of sall letter=(97-122)
     printf("its a small letter");
    else if(c>=48 && c<=57)
    //Range of ascii value of digits=(48-57)
     printf("its a digit");
    else
     printf("its something else");
    return 0;
}