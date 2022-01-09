#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b=1,lastnum;
    printf("Enter the number up to which Fibonacci Series you want: ");
    scanf("%d",&lastnum);
    for(a=0;a<=lastnum;b=b+a)
    {
        printf(" %d %d",a,b);
        a=a+b;
    } 
    return(0);
    getch();
}