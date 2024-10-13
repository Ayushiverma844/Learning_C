//Wap to declare 2 character array then tacke input from the user and  copy string from one array to another array.

#include <stdio.h>
#include<string.h>
int main()
{
    char arr[10];
    char brr[10];
 printf("enter 2 string ");
 scanf("%s %s",arr,brr);
 strcpy(brr,arr);
    printf("%s",brr);

    return 0;
}