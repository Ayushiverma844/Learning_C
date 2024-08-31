//Wap to accept a character from the user and print Ascii value of it.

#include<stdio.h>
int main()
{
    int c;
     //ask user to intput a character.
    printf("Enter a character:");
    scanf("%c",&c);
    printf("Ascii value of %c is %d",c,c);
    return 0;
}