//Ask the user to input an integer n and print first n prime no.

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
     return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
         return 0; // If divisible by any i, it's not prime
    }
    return 1; // If no factors found, it's prime
}

int main() {
    int n; 
    int count = 0; 
    int number =2;

    // Ask the user for input
    printf("Enter the number of prime numbers to print: ");
    scanf("%d", &n); 

    printf("The first %d prime numbers are:\n", n);
    
    // Loop until we find n prime numbers
    while (count < n) {
        if (isPrime(number)) { 
            printf("%d\n", number); // Print the prime number
            count++; 
        }
        number++; // Move to the next number
    }
    
    printf("\n"); // Print a new line after the list of primes

    return 0; 
}
