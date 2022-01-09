#include<stdio.h>  
int main()  
{  
    char *str;  
    {  
        char a = 'A';  
        str = &a;  
    }  
    // a falls out of scope   
    // str is now a dangling pointer   
    printf("Here is a Dangling Pointer which we can't see");
    printf("%s", *str);  
}  