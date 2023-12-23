#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    printf("Enter any string: ");
    scanf("%s",string);
    int z, r, lengde = strlen(string);
    int frekvens[lengde];


    for(z = 0; z < strlen(string); z++) {
        frekvens[z] = 1;
        for(r = z+1; r < strlen(string); r++) {
            if(string[z] == string[r]) {
                frekvens[z]++;

                string[r];
            }
        }
    }

    for(z = 0; z < lengde; z++) {
        if(string[z] != ' ' && string[z] != '0')
            printf("'%c' : %d\n", string[z], frekvens[z]);
    }

    return 0;
}