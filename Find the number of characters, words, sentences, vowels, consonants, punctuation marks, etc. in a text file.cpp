#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, sentences = 0, vowels = 0, consonants = 0, punctuation = 0;

    fp = fopen("file.txt", "r"); // Open the file in read mode

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (isspace(ch)) {
            words++;
        }

        if (ch == '.' || ch == '!' || ch == '?') {
            sentences++;
        }

        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
            vowels++;
        } else if (isalpha(ch)) {
            consonants++;
        }

        if (ispunct(ch)) {
            punctuation++;
        }
    }

    // Handle the last word (since we only count spaces after a word)
    words++;

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of sentences: %d\n", sentences);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of punctuation marks: %d\n", punctuation);

    fclose(fp); // Close the file

    return 0;
}
