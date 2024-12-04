// WAP to search an integer in an array of 10 integers.

#include <stdio.h>
int main(){
    int arr[10],  search;
    printf("Enter 10 Numbers: ");

    for (int i = 1; i <= 10; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter number you want to search: ");
    scanf("%d", &search);

    for (int i = 1; i <= 10; i++){
        if (arr[i] == search ){
            printf("Number %d found at position %d.\n", search, i);
        }
    }
    return 0;
}