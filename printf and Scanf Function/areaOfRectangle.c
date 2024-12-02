//Write a program to input length and breadth of a rectangle and display its area.
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