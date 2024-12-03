// Find the Number Is Armstrong or Not Using While Loop.

#include <stdio.h>
int main() {
    int num, ogNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    ogNum = num;
    
    while (ogNum != 0) {
        remainder = ogNum % 10;
        result += remainder * remainder * remainder;
        ogNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}