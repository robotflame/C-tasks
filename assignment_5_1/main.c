#include <stdlib.h>
#include <stdio.h>

typedef struct student_t
{
    char          name[50];
    int           id;
    int           age;

}student_t;

int main()
{
    student_t *tmp = malloc(sizeof(student_t));


    printf("Student id: ");
    scanf("%i", &(tmp->id));

    printf("Name: ");
    scanf("%s", tmp->name);

    printf("Age: ");
    scanf("%i", &(tmp->age));


}