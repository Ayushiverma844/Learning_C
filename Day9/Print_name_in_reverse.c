//write a program to accept a string from the user and print it in reverse.

#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    int i;

    printf("Enter your name: ");
     fgets(name, sizeof(name), stdin);  // Use fgets to read the full string
     name[strcspn(name, "\n")] = '\0';   // Remove the newline character if present

    int length = strlen(name);
    printf("Length of string is %d\n", length);

    printf("your name in reverse:\n");
    for(i= length-1; i>=0; i--){
        printf("%c",name[i]);
    }
    
    printf("\n");

    return 0;
}
