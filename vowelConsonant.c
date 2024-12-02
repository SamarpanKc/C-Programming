#include <stdio.h>
int main(){
    char l;
    printf("Enter a Character: ");
    scanf("%c", &l);

    if (l == 'a' || l=='e' || l == 'i' || l == 'o' || l == 'u'){
        printf("%c is a Vowel Letter", l);
    }else{
        printf("%c is a Consonant Letter", l);
    }
    return 0;
}