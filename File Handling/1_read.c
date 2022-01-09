#include<stdio.h>
int main()
{
    FILE *fp;
    char name[20];
    long int id;
    fp= fopen("write.txt", "rb");
    fgets(name, 20, fp);
    fscanf(fp, "%ld", &id);
    printf("%s%ld", name, id);
    fclose(fp);
    return 0;
}