#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>


int main()
{
    char str1[20], str2[20], c;
    int i=0;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string character by character: ");
    while(c!='\n'){
        fflush(stdin);
        scanf("%c", &c);
        str2[i]=c;
        i++;
    }
    str2[i]='\0';
    printf("The value of str1 is: %s\n",str1);
    printf("The value of str2 is: %s\n",str2);
}

