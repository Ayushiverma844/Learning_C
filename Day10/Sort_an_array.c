// Write a program to sort an array of numbers in ascending order.
// Example:
// Input: array = [3, 1, 4, 1, 5, 9]
// Output: [1, 1, 3, 4, 5, 9]
// Explanation: The array sorted in ascending order is [1, 1, 3, 4, 5, 9].

#include <stdio.h>

int main() {
    int n;
    int temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Accept elements in array
    for (int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }

    // Sort array using Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
