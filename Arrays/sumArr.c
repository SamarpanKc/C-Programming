//  WAP to find the sum of all the integers of an array

#include <stdio.h>
int main(){
    int arr[10],  sum=0;
    printf("Enter 10 Numbers: ");

    for (int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++){
        sum += arr[i];
    }
    
    printf("The sum of the given array is %d.", sum);
    return 0;
}