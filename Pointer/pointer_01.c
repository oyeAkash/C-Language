#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a=10, *b;
    b=&a;
    printf("%d\t%u\n", *b, b); // in Vs Code (int *) is of 4 bytes
    b++;
    printf("%d\t%u", b, b);
    return(0);
}