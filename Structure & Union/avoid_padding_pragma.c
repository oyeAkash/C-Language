#include <stdio.h>  
#pragma pack(1)   // look at here

// this programe will ignore structure padding
struct base  
{  
    int a;  
    char b;  
    float c;  
};  
int main()  
{  
    struct base var;  
    printf("The size of the var is : %d", sizeof(var));  
    return 0;  
}  