
// WAP to accept a 3x3 matrix and display the sum of all the elements of the matric.

#include <stdio.h>
int main() {
    int matrix[3][3], sum = 0, i;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < 3; i++)
        sum += matrix[i][i] * matrix[i][i];

    printf("Sum of squares of diagonal elements: %d\n", sum);
    return 0;
}
