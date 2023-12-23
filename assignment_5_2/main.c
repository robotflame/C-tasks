#include <stdio.h>
#include "student.h"


int main() {
    int option=0;
    student_t student;
    while (1){
        scanf("%i",&option);
        if(option==1){
            FILE *f = fopen("student_read.txt", "r");
            fscanf(f,"%i",&student.id);
            fgetc(f);
            fgets(student.name,100,f);
            fscanf(f,"%i",&student.age);

            printf("Student id: %i\nName: %sAge: %i\n",student.id,student.name,student.age);

            fclose(f);
        }
        else if(option==2){
            FILE *f = fopen("student_write.txt", "w");
            scanf("%i", &student.id);
            getchar();
            fgets(student.name, 100, stdin);
            scanf("%i", &student.age);

            fprintf(f,"%i\n%s%i\n", student.id,student.name,student.age);


            fclose(f);
        }
        else{
            break;
        }
    }



    return 0;
}

