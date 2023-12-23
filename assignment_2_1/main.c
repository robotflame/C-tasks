#include <stdio.h>
int main()

{

    float num;
    float sum = 0;
    int count = -1;
    float average;

    do
    {

        printf("Enter a number: ");
        scanf("%g", &num);
        sum += num;
        count++;
        average= sum/count;


    }while(num != 0);


    printf("Count: %d\n",count);
    printf("Sum: %g\n",sum);
    printf("Average: %g\n",average);


    return 0;
}

