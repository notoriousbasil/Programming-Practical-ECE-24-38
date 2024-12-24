#include <stdio.h>

int is_palindrome(char *str) {
    char *start = str;
    char *end = str;

    // Find the end of the string
    while (*end != '\0') {
        end++;
    }
    end--; // Move back to the last character

    while (start < end) {
        if (*start != *end) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }

    return 1; // Palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (is_palindrome(str)) {
        printf("%s is a palindromes is not a palindrome.\n", str);
    }

    return 0;
}
