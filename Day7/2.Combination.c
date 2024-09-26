#include <stdio.h>

// Function prototype
int fact(int x);

int main() {
    int n, r;
    
    printf("Enter 2 numbers: ");
    scanf("%d %d", &n, &r);

    if (r > n) {
        printf("Error!!!\n");
        return 0;
    }

    int result = fact(n) / (fact(r) * fact(n - r));
    printf("Answer = %d\n", result);

    return 0;
}

// Function to compute factorial of a number
int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}