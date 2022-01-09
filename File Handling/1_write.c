#include<stdio.h>
int main()
{
    FILE *fp;
    char name[20];
    long int id;
    fp= fopen("write.txt", "wb");
    printf("Name:");
    gets(name);
    printf("ID:");
    scanf("%ld", &id);
    fprintf(fp, "%s\n%ld", name, id);
    fclose(fp);
    return 0;
}