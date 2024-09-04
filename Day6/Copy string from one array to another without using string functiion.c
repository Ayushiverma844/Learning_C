//Wap to accept a string from the user and store it in a character array and copy it in another character array, without using any string function.

#include<stdio.h>
int main()
{
    char arr[10],brr[10];
    int i;
    printf("enter string ");
    gets(arr);
    for(i=0;arr[i]!='\0';i++)
    {
        brr[i]=arr[i];
    }
    brr[i]='\0';
    printf("%s",brr);
    return 0;
    
}