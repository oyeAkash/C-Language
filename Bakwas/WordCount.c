#include<stdio.h>
#include<string.h>  //THIS PROGRAMME WILL COUNT THE NUMBER OF WORDS IN ANY STRING
int main()
{
    char string[100];
    int length,i,temp=1;
    printf("Enter any sentence to count number of words: ");
    gets(string);
    length=strlen(string);
    for(i=0;i<=length;i++)
    {
        if(string[i]==' ')
        {
            temp++;
            if(string[i+1]==' ')
            temp--;
        }    
    }
    printf("Number of words: %d",temp);
    return(0);
}