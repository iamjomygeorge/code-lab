#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromeChecker(char word[]);

int main(void){
    char word[100];
    printf("\nEnter a word: ");
    if(scanf("%99s", word) != 1){
        printf("Enter a valid word.");
        return EXIT_FAILURE;
    }

    int result = palindromeChecker(word);
    if(result == 0){
        printf("Entered word %s is a palindrome.", word);
    }else{
        printf("Entered word is not a palindrome.");
    }

    return EXIT_SUCCESS;
}

int palindromeChecker(char word[]){
    int wordLength = strlen(word);
    char tempArray[wordLength];
    int j = 0;
    for(int i=wordLength - 1; i>=0; i--){
        tempArray[j] = word[i];
        j++;
    }

    int counter = 0;
    for(int i=0; i<wordLength; i++){
        if(tempArray[i] == word[i]){
            counter ++;
        }
    }

    if(counter == wordLength){
        return 0;
    }else{
        return 1;
    }
}
