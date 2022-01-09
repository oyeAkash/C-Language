#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,mult;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            mult=i*j;
            printf("%d\t",mult);
        }
        printf("\n");
    }
    return(0);
}