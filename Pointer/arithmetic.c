// WAP to Demonstrate the Concept of Pointer Arithmetic

#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Initial pointer points to: %d\n", *ptr);
    ptr++;  // Move to the next integer
    printf("After incrementing, pointer points to: %d\n", *ptr);
    ptr--;  // Move back to the previous integer
    printf("After decrementing, pointer points to: %d\n", *ptr);
    
    printf("Difference between addresses: %ld\n", (arr + 4) - arr);
    return 0;
}
