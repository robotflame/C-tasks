#include <stdlib.h>
#include <stdio.h>
int main() {

    int integernummer = 0;
    printf("How many integers?\n");
    scanf("%i", &integernummer);
    int *integer = malloc(integernummer * sizeof(int));

    if (0 == integernummer) {
        printf("No numbers were given");
    } else {


        for (int i = 0; i < integernummer; ++i) {
            scanf("%i", &integer[i]);

        }
        printf("Count: %i\n", integernummer);
        printf("Numbers:");
        for (int i = +0; i < integernummer; ++i) {
            printf(" %i", integer[i]);

        }

        for (int x = 0; x < integernummer; ++x) {
            for (int y = x + 1; integernummer > y; ++y) {
                if (integer[y] < integer[x]) {
                    int temp = integer[x];
                    integer[x] = integer[y];
                    integer[y] = temp;
                }
            }
        }

        printf("\nSorted:");
        for (int i = 0; i < integernummer; ++i) {
            printf(" %d", integer[i]);
        }
        free(integer);

    }
    return 0;
}
