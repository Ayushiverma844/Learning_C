// Problem Statement:
// Write a C program that takes two strings as input from the user, concatenates them, and prints the resulting string. The program should use the strcat() function from the <string.h> library to perform string concatenation.

// Input:
// enter 2 string  
// Hello World

// Output:
// HelloWorld


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