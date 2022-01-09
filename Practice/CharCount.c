#include<stdio.h>
#include<string.h>
int main()

{
    int i,temp_1=0,temp_2;
    char string[100];
    printf("Enter text to count number of characters: ");
    gets(string);
    for(i=0;i<100;i++)
    {
        if(string[i]==' ')
            temp_1--;
        else
            temp_1++;  
    }
    temp_2=99-temp_1;
    printf("Number of characters you have entered: %d",temp_2);
    return(0);
}