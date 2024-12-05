// Copy Contents from One File to Another
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *source, *destination;
    char ch;

    // Open source file in read mode
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Error opening destination file!\n");
        fclose(source);
        return 1;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("Contents copied from source.txt to destination.txt successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}
