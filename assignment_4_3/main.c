#include <stdio.h>
#include <string.h>


int main() {
    char alpha[100] ={0}, bravo[100] ={0};
    printf("Enter the first string\n");
    fgets(alpha, 100, stdin);
    alpha[strlen(alpha)-1]= 0;

    printf("Enter the second string\n");
    fgets(bravo, 100, stdin);

    bravo[strlen(bravo)-1]= 0;

    if( strcmp(alpha, bravo) == 0 )
        printf("The words are equal\n");
    else
        printf("The words are not equal\n");


    if (strstr(alpha, bravo) != 0)

        printf("Word 2 is a substring of word 1");
    else if (strstr(bravo, alpha) != 0)
        printf("Word 1 is a substring of word 2");
    else
        printf("No substrings found");

    return 0;
}
