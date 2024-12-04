// WAP to input any five integers in an array and display the second largest number.

#include <stdio.h>
int main() {
    int arr[5], i, largest, second_largest;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    largest = second_largest = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    printf("Second largest number: %d\n", second_largest);
    return 0;
}