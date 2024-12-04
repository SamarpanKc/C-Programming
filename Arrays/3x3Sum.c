// WAP to accept a 3x3 matrix and display the sum of all the elements of the matric. 
#include <stdio.h>
int main() {
    int matrix[3][3], sum = 0;

    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }

    printf("Sum of all elements: %d\n", sum);
    return 0;
}
