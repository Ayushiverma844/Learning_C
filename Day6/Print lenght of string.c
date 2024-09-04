//Wap to accept a string from the user and display its lenght.

#include<stdio.h>
int main()
{
    int i;
    char str[10];
    printf("Enter your name: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++);
             //loop is blank thas wyh we use ';' with for.
    printf("Lenght is %d",i);
    
    return 0;
}