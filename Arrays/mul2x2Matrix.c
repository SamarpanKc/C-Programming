#include <stdio.h>
int main() {
    int a[2][2], b[2][2], prod[2][2] = {0}, i, j, k;

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            for (k = 0; k < 2; k++)
                prod[i][j] += a[i][k] * b[k][j];

    printf("Product of matrices:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", prod[i][j]);
        printf("\n");
    }
    return 0;
}