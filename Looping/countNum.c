// Count Number of Digits of an Integer Using Loop

#include <stdio.h>
int main(){
    long num, count=0;
    printf("Enter Numbers: ");
    scanf("%ld", &num);
    // printf("%ld", num);
    while(num> 0){
      count ++;
      num /= 10;
    }
    printf("There are %d Digits", count);
    return 0;
}
