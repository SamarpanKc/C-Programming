// ax^2 + bx + c = 0
#include <stdio.h>
#include <math.h>
int main()
{
    float discriminat, a, b, c, root1, root2, real, imaginary;
    printf("Enter a value of a: ");
    scanf("%f", &a);
    printf("Enter a value of b: ");
    scanf("%f", &b);
    printf("Enter a value of c: ");
    scanf("%f", &c);
    discriminat = pow(b, 2) - 4 * a * c;
    
    if (discriminat > 0){
        printf("Real Number\n");
        root1 = (-b + discriminat) / 2 * a;
        root2 = (-b - discriminat) / 2 * a;
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    }else if (discriminat == 0){
        printf("Equal Number\n");
        root1 = -b / 2 * a;
        printf("Root 1: %.2f\n", root1);
    }else{
        printf("Imaginary Number\n");
        real = -b / 2 * a;
        imaginary = sqrt(-discriminat) / 2 * a;
        printf("Root 1: %.2f + %.2fi\n", real, imaginary);
        printf("Root 2: %.2f - %.2fi", real, imaginary);
    }
    return 0;
}