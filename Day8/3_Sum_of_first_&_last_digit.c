//Write a program to accept an integer from the user and print the sum of its first and last digit only.

#include <stdio.h>

int main() {
    
    int num, first, last, sum;

    // Accept an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Find the last digit
    last = num % 10;

    // Find the first digit
    while (num >= 10) {
        num = (num /10);
    }
     first = num;

    // Calculate the sum of the first and last digits
    sum = first + last;

    // Print the result
    printf("The sum of the first and last digit is: %d\n", sum);

    return 0;
}
