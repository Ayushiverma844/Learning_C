//Wap to accept an integer from the user and print all prime no from 1 to that no. 
#include <stdio.h>

int main() {
    int n;

    // Input value for n
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Loop through each number from 2 to n
    for (int i = 2; i <= n; i++) {
        int is_prime = 1; // Assume i is prime

        // Check if i is divisible by any number from 2 to i-1
        for (int x = 2; x <= i / 2; x++) {
            if (i % x == 0) {
                is_prime = 0; // i is not prime
                break; // No need to check further
            }
        }

        // If is_prime is still 1, then i is a prime number
        if (is_prime) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}