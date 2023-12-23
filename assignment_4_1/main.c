#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool is_palindrome(char string_input[]) {
    int slutt = (int) strlen(string_input) - 1;

    for (int i = 0; i <= slutt; slutt--, i++) {
        if (string_input[i] != string_input[slutt]) return 0;
    }
    return 1;
}

void string_reverse(char revers[]) {
    char temp[100];
    strcpy(temp, revers);
    int end = (int) strlen(revers) - 1;
    printf("The word reversed is '");
    for (int i = end; i >= 0; i--) {
        printf("%c", revers[i]);
    }
    printf("'\n");
}


int main() {
    char inputbruker[100];
    printf("Type in a word: ");

    fgets(inputbruker, 100, stdin);
    inputbruker[strlen(inputbruker) - 1] = 0;
    printf("You typed: %s\n", inputbruker);
    printf("The word contains %i letters\n", (int) strlen(inputbruker));

    if (is_palindrome(inputbruker)) {
        printf("The word is a palindrome\n");
    }
    else {
        printf("The word is not a palindrome\n");
    }

    string_reverse(inputbruker);


    return 0;

}









