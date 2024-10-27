// Write a program to determine if a number is a perfect number.
// Example:
// Input: number = 28
// Output: Perfect Number
// Explanation: 28 is a perfect number because its divisors (1, 2, 4, 7, 14) sum up to 28.

#include <stdio.h>

int main() {
    int number, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);


    printf("Divisors of %d are = ",number);

    // Find the sum of the proper divisors
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
            printf("%d,",i);
        }
    }

    printf("\nSum of divisors is = %d\n",sum);

    // Check if the number is a perfect number
    if (sum == number && number != 0) {
        printf("%d is a Perfect Number\n", number);
    } else {
        printf("%d is not a Perfect Number\n", number);
    }

    return 0;
}