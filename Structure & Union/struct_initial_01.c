#include<stdio.h>
#include<string.h>

struct student {
    long int roll;
    char name[20];   
};


int main(){
    struct student s1;
    printf("Enter student name: ");
    gets(s1.name);
    fflush(stdin);
    printf("Enter roll no.: ");
    scanf("%ld", &s1.roll);
    printf("%ld\n%s", s1.roll, s1.name);
    return 0;
}

