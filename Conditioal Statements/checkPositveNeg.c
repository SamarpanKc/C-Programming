//Write a C program to check whether a given number is positive, negative, or zero using if-else statements.
 
#include <stdio.h>
int main(){
    int num;
    printf("Enter number (-/+/0): ");
    scanf("%d", &num);
    if (num >= 1){
        printf("The number is positive.");
    } else if(num == 0){
        printf("The number is Zero.");
    }else if (num <= 0){
        printf("The number is negative.");
    }
    return 0;
}