// Write a program to input length and breadth of a rectangle and display its area.
#include <stdio.h>
int main(){
    float p, t, r;
    printf("Enter Principle: ");
    scanf("%f", &p);
    printf("Enter Time: ");
    scanf("%f", &t);
    printf("Enter Rate: ");
    scanf("%f", &r);
    float SI = (p*t*r)/100;
    printf("Simple Interest is: %.2lf",SI);
    return 0;
}