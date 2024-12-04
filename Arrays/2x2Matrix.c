// WAP to create and display a 2x2 matrix.

#include <stdio.h>
int main() {
    int matrix[2][2], i, j;
    printf("Enter elements of 2x2 matrix: ");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &matrix[i][j]);

    printf("\nMatrix is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    return 0;
}
