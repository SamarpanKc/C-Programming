// WAP to enter a name and display the total number of characters in the name

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    gets(name); // Using gets() for simplicity (not recommended in modern use)
    printf("Total number of characters: %d\n", strlen(name));
    return 0;
}
