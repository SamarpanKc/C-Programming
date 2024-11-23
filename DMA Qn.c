// Enter age of 20 students and count age btn 12 and 24 from using DMA func.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 20;
    int *age = (int*)malloc(n*sizeof(int));

    for( int i=0; i<n; i++ ){
        printf("Enter the Age of Student-%d: ", i+1);
        scanf("%d", &age[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++){
        if(age[i]>=12 && age[i]<=24){
            count ++;
        }
    }
    free(age);
    printf("There are %d students age btn 12 to 24.", count);
}