#include <stdio.h>
#include <string.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[] = "source.txt", destinationFileName[] = "modified.txt";
    char wordToFind[50], wordToReplace[50], buffer[1000];
    char *pos;

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Error: Could not open destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Get the word to find and replace from the user
    printf("Enter the word to find: ");
    scanf("%s", wordToFind);
    printf("Enter the word to replace it with: ");
    scanf("%s", wordToReplace);

    // Process the file line by line
    while (fgets(buffer, sizeof(buffer), sourceFile) != NULL) {
        // Search for the word in the current line
        while ((pos = strstr(buffer, wordToFind)) != NULL) {
            // Write the text before the found word
            fwrite(buffer, 1, pos - buffer, destinationFile);

            // Write the replacement word
            fprintf(destinationFile, "%s", wordToReplace);

            // Move the buffer pointer after the found word
            strcpy(buffer, pos + strlen(wordToFind));
        }

        // Write the remaining part of the line
        fprintf(destinationFile, "%s", buffer);
    }

    printf("Word replacement completed. Modified content saved to '%s'.\n", destinationFileName);

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
