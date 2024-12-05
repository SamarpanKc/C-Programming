// Create a File and Write/Read Contents

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char data[100];

    // Create and open the file in write mode
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Accept string from the user
    printf("Enter a string to write to the file: ");
    fgets(data, sizeof(data), stdin);

    // Write the string to the file
    fprintf(file, "%s", data);
    fclose(file);

    // Open the file in read mode
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and display the contents of the file
    printf("\nContents of the file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }
    fclose(file);

    return 0;
}
