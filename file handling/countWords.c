// Count Words and Lines in a File

#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file;
    char ch;
    int words = 0, lines = 0, in_word = 0;

    // Open the file in read mode
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Count words and lines
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }
    fclose(file);

    // Display the results
    printf("Total number of lines: %d\n", lines);
    printf("Total number of words: %d\n", words);

    return 0;
}