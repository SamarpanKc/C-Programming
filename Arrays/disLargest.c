// WAP to input any five integers in an array and display the largest one.

#include <stdio.h>
int main() {
    int arr[5], max;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    max = arr[0];
    for (int i = 1; i < 5; i++)
        if (arr[i] > max)
            max = arr[i];

    printf("Largest number: %d\n", max);
    return 0;
}