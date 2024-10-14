//Write a program to accept a string from the user & count and print total no of vowels in it

#include <stdio.h>
#include <string.h>

int main() {
    char str[30];
    int i, count = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);  // Use fgets to read the full string
    str[strcspn(str, "\n")] = '\0';   // Remove the newline character if present

    int length = strlen(str);
    printf("Length of string is %d\n", length);

    for (i = 0; i < length; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' || 
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
            str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }

    printf("Total vowels are %d\n", count);
    
    return 0;
}
