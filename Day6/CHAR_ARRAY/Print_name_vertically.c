// Problem Statement:

// Write a program in C that accepts a string from the user and displays each character of the string on a new line, i.e., vertically. The program should handle input and output as follows:

// Prompt the user to enter a string.

// Display the string vertically, with each character printed on a new line.

// Example:

// Input:
// Enter your name: John

// Output:
// J
// o
// h
// n

#include<stdio.h>
int main()
{
    int i;
    char str[10];
    printf("Enter your name: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        printf("\n%c",str[i]);
    }
    return 0;
}