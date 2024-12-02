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