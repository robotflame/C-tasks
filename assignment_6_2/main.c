#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct studenten_s{
    char navn[20];
    int alder;
};
int main() {

    struct studenten_s* student = malloc(sizeof(struct studenten_s));
    char navn[20];
    int alder;
    int teller;


    int student_tildelt = 1;
    while(1){
        printf("Give me a name");
        fgets(navn, 45,stdin);
        navn[strlen(navn)-1] = 0;

        if(strcmp(navn,"stop")==0){
            break;
        }

        printf("Give me the age: ");
        scanf("%i",&alder);
        getchar();

        if(student_tildelt<teller+1){
            student_tildelt++;
            student = realloc(student, (student_tildelt)* sizeof(struct studenten_s));
        }
        student[teller].alder = alder;
        strcpy(student[teller].navn,navn);
        teller++;
    }
    if(teller == 0){
        printf("No students were given");
    }
    else {
        printf("Count: %i",teller);
        for (int i = 0; i < teller; ++i) {
            printf("\nName = %s, Age = %i", student[i].navn,student[i].alder);
        }
                int lavestalder = 10000;
                char ungstudent[35];
                for (int x = 0; x < teller; ++x) {
                    if(student[x].alder<lavestalder){
                        lavestalder = student[x].alder;
                        strcpy(ungstudent,student[x].navn);
            }
        }
        int størstalder = -10000;
        char gammelstudent[35];
        for (int x = 0; x < teller; ++x) {
            if(student[x].alder>størstalder){
                størstalder = student[x].alder;
                strcpy(gammelstudent,student[x].navn);

            }
        }
        printf("\nYoungest: %s", ungstudent);



        printf("\nOldest: %s", gammelstudent);

    }
    free(student);



    return 0;
}
