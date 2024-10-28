// Write a program to find the N-th triangular number.
// Example:
// Input: N = 4
// Output: 10
// Explanation: The 4th triangular number is 10 (sum of the first 4 natural numbers).



#include <stdio.h>

// Function to calculate the N-th triangular number
int triangularNumber(int N) {
    return (N * (N + 1)) / 2;
}

int main() {
    int N;

    printf("Enter a number N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        int result = triangularNumber(N);
        printf("The %d-th triangular number is: %d\n", N, result);
    }

    return 0;
}
