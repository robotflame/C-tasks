#include <stdio.h>
#include <stdlib.h>


int comparator (const void * p1, const void * p2)
{
    return (*(int*)p1 - *(int*)p2);
}

int maximum(int [],int);
int minimum(int [], int);


float average(int mean, int a[]) {
    int sum=0, i;
    for(i=0; i<mean; i++)
        sum+=a[i];
    return((float)sum/mean);
}



int sum(int a[],int n)
{
    int i,sumo=0;

    for(i=0; i<n; i++)
    {
        sumo+=a[i];

    }
    return sumo;
}


float median(int marks[] , int n)
{
    float mediano;

    if(n%2 == 0)
        mediano = (marks[(n-1)/2] + marks[n/2])/2.0;

    else
        mediano = marks[n/2];

    return mediano;
}



int main() {

    int marks[10];
    int i;
    int m;
    int g;
    int sumo;
    float mediano;


    for(i=0; i<10; ++i)
    {
        printf("Please enter integers: ");
        scanf("%i", &marks[i]);
        printf("You have entered: %i\n", marks[i]);



    }


    m=maximum(marks,i);
    printf("\nMaximum: %d",m);

    g=minimum(marks,i);
    printf("\nMinimum: %d",g);


    sumo =sum(marks,i);
    printf("\nSum: %d",sumo);

    printf("\nAverage: %g",average(i,marks));



    qsort(marks, 10, sizeof(int), comparator);
    printf("\nSorted: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", marks[i]);
    }


    mediano = median(marks,i);

    printf("\nMedian: %g",mediano);








    return 0;
}

int maximum(int s[],int b)
{
    int r,i;
    r=s[0];
    for(i=1;i<b;i++)
    {
        if(s[i]>r)
            r=s[i];
    }
    return(r);
}

int minimum(int array[], int z)
{
    int i=0, min;
    min=array[i];
    while(i<z)
    {
        if(min>array[i])
            min = array[i];
        i++;
    }
    return min;
}

