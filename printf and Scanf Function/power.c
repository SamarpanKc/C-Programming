// Read Integer N and Print the First Three Powers (N^1, N^2, N^3).

#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int power1= pow(n,1), power2= pow(n,2), power3= pow(n,3);
    printf("The first three powers of %d is: %d, %d, %d", n, power1, power2, power3);
    return 0;
}