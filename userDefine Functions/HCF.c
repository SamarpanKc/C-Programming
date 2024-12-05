// WAP to find LCM and HCF of two input numbers using two separate functions
#include <stdio.h>

// Function to find HCF
int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find LCM
int findLCM(int a, int b) {
    return (a * b) / findHCF(a, b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("HCF: %d\n", findHCF(num1, num2));
    printf("LCM: %d\n", findLCM(num1, num2));
    return 0;
}
