#include <stdio.h>
int main(){
    float mark;
    printf("Enter your mark: ");
    scanf("%f", &mark);
    if (mark<40){
        printf("None Grade (NG)");
    } else if(mark<50 && mark>=40 ){
        printf("You got: C");
    } else if(mark<60 && mark>=50){
        printf("You got: C+");
    } else if(mark<70 && mark>=60){
        printf("You got: B");
    } else if(mark<80 && mark>=70){
        printf("You got: B+");
    } else if(mark<90 && mark>=80){
        printf("You got: A");
    } else if(mark<100 && mark>=90){
        printf("You got: A+");
    }
    return 0;
}