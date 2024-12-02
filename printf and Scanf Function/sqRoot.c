// Find the square root of an input number.
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sqRoot= sqrt(n);
    printf("The square root of %d is: %d", n, sqRoot);
    return 0;
}