// Write a program to check if a number is a narcissistic number (where the sum of its digits raised to the power of the number of digits equals the number itself).
// Example:
// Input: number = 153
// Output: Narcissistic Number
// Explanation: 153 is a narcissistic number because 1^3 + 5^3 + 3^3 = 153

#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, sum = 0, count = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number; // Store the original number

    // Count the number of digits
    while (originalNumber > 0) {
        count++;
        originalNumber /= 10; // Divide by 10 to reduce the number
    }

    originalNumber = number; // Reset originalNumber to its initial value

    // Calculate the sum of the digits raised to the power of count
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        int x = pow(digit, count); 
        sum = sum + x ; // Add the power of the digit to the sum
        number /= 10; // Remove the last digit
    }

    // Check if the sum equals the original number
    if (sum == originalNumber) {
        printf("%d is a Narcissistic Number\n", originalNumber);
    } else {
        printf("%d is not a Narcissistic Number\n", originalNumber);
    }

    return 0;
}
