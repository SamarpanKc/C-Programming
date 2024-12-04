// WAP to search an integer in an array.

#include <stdio.h>
int main() {
    int arr[10], key, i, found = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number to search: ");
    scanf("%d", &key);

    for (i = 0; i < 10; i++) {
        if (arr[i] == key) {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Number not found.\n");

    return 0;
}