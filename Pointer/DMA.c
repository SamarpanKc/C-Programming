// WAP to Demonstrate the Concept of Dynamic Memory Allocation (DMA)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *ptr, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocating memory for n integers
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum of the entered numbers: %d\n", sum);

    // Free allocated memory
    free(ptr);
    return 0;
}
