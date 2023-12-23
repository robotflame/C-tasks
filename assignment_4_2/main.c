#include <stdio.h>
#include<string.h>




void string_upper(char *z)
{
    int i=0;
    while(z[i]!='\0')
    {
        if(z[i]>='a' && z[i]<='z'){
            z[i]=z[i]-32;
        }
        ++i;
    }
}




void string_lower(char *p)
{
    int b=0;
    while(p[b]!='\0')
    {
        if(p[b]>='A' && p[b]<='Z'){
            p[b]=p[b]+32;
        }
        ++b;
    }
}



int main() {
    char string[100], ventrehalvside[100], høyrehalvside[100];
    int lengde, midx, o,  j;


    printf("Enter any string: ");
    scanf("%s",string);

    lengde = strlen(string);

    midx = lengde/2;

    for(o = 0; o < midx; o++) {
        ventrehalvside[o]= string[o];
    }
    ventrehalvside[o] = '\0';


    for(o = midx, j = 0; o <= lengde; o++, j++) {
        høyrehalvside[j]= string[o];
    }


    printf("The word split in two is '%s - %s'\n",ventrehalvside, høyrehalvside);

    string_lower(string);
    printf("The word in lowercase is '%s'\n",string);

    string_upper(string);
    printf("The word in uppercase is '%s'\n",string);


    return 0;
}

