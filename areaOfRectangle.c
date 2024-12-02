#include <stdio.h>
int main(){
    float l, b;
    printf("Enter Lenght: ");
    scanf("%f", &l);
    printf("Enter Breadth: ");
    scanf("%f", &b);
    float Area = l*b;
    printf("Area of Rectangle is: %.2lf", Area);
    return 0;
}