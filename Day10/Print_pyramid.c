// Write a program to create different star patterns (e.g., pyramid).
// Example:
// Input: patternType = "pyramid", height = 5
// Output:

//     *
//    ***
//   *****
//  *******
// *********

#include<stdio.h>


int main() {
    int rows = 5;  // Number of rows for the pyramid

    // Print the pyramid
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

  
    return 0;
}
