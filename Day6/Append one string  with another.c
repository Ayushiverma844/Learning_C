#include <stdio.h>
#include<string.h>
int main()
{
    char arr[10];
    char brr[10];
 printf("enter 2 string ");
 scanf("%s %s",arr,brr);
 strcat(arr,brr);
    printf("%s",arr);

    return 0;
}