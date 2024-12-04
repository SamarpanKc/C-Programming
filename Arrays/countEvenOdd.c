// WAP to get 20 numbers from the user and count the number of even and odd numbers.

#include <stdio.h>
int main() {
    int arr[20], even = 0, odd = 0;

    printf("Enter 20 numbers:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers: %d, Odd numbers: %d\n", even, odd);
    return 0;
}
