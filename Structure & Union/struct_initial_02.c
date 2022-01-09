#include<stdio.h>

struct student {
    long int roll;      /* THIS IS ANOTHER WAY TO INITIALISE STRUCTURE */
    char name[20];      
} s1;   /* this is global declaration */


int main()
{

    printf("Enter student name: ");
    gets(s1.name);
    fflush(stdin);
    printf("Enter roll no.: ");
    scanf("%ld", &s1.roll);
    printf("%ld\n%s", s1.roll, s1.name);
    return 0;
}