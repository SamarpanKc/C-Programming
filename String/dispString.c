// WAP to input a sentence and display the number of words

#include <stdio.h>
#include <string.h>

int main(){
    char sentence[200];
    int words = 1; // Start with 1 for the first word
    printf("Enter a sentence: ");
    gets(sentence);
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ')
            words++;
    }
    printf("Total number of words: %d\n", words);
    return 0;
}