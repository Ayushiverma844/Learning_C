//Wap to declare 2 character array ,accept input from the user and compare then wheather both strings are same or not.

#include <stdio.h>
#include<string.h>
int main()
{
    char arr[10];
    char brr[10];
 printf("enter 2 string ");
 scanf("%s %s",arr,brr);
 strcmp(arr,brr);
 if(strcmp(arr,brr)==0)
      printf("strings are same");
    else
    printf("strings are not same");

    return 0;
}