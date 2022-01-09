#include<stdio.h>
#include<string.h>
int input();
int calculate();
int print();

struct result{
    char name[20], result[10], div[20], class[10];
    int roll, h, e, p, c, m, total;
    float per;
}s;


int input(){
    printf("Enter Name: ");
    gets(s.name);
    printf("Enter roll no: ");
    scanf("%d", &s.roll);
    printf("Enter class & section: ");
    fflush(stdin);
    gets(s.class);
    printf("Enter marks of HINDI: ");
    scanf("%d", &s.h);
    printf("Enter marks of ENGLISH: ");
    scanf("%d", &s.e);
    printf ("Enter marks of PHYSICS: ");
    scanf("%d", &s.p);
    printf("Enter marks of CHEMISTRY: ");
    scanf("%d", &s.c);
    printf("Enter marks of MATHS: ");
    scanf("%d", &s.m);
    return 0;
}


int calculate(){
    s.total = s.h + s.e + s.p + s.c + s.m;
    s.per = (float)s.total/5;
    if(s.h>=33 && s.e>=33 && s.p>=33 && s.c>=33 && s.m>=33){
        if(s.per>=60)
            strcpy(s.result, "FIRST DIVISION"); 
        else
            if(s.per>=45)
                strcpy(s.result, "SECOND DIVISION");
            else   
                strcpy(s.result, "THIRD DIVISION");
    }
    else{
        strcpy(s.result, "FAIL");
    }
    return 0;
}

int print(){
    printf("Name: %s\nRoll no.: %d\nClass: %s\nHINDI\t%d\nENGLISH\t%d\nPHYSICS\t%d\nCHEMISTRY\t%d\nMATHS\t%d\n\nPercentage:  %.02f\nDivision:  %s\n", s.name, s.roll, s.h, s.e, s.p, s.c, s.m, s.per, s.result);
}

int main()
{
    input();
    calculate();
    print();
    return 0;
}