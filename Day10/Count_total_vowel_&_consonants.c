// Write a program to count vowels and consonants in a given string.
// Example:
// Input: string = "hello world"
// Output: Vowels: 3, Consonants: 7
// Explanation: "hello world" contains 3 vowels (e, o, o) and 7 consonants (h, l, l, w, r, l, d).

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];  // Declare a character array with a fixed size
    int count = 0;

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);  

    // Remove the newline character from fgets if present
    s[strcspn(s, "\n")] = '\0';

    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        // Check for vowels (both lowercase and uppercase)
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            count++;
        }
    }

    printf("No of vowels: %d\n", count);
    printf("No of consonants: %d\n", length - count);

    return 0;
}