#include <stdio.h>  
int main()  
{  
    int x=4;  
    int y;  
    int *ptr;  
    ptr=&x;   
    y=*ptr;  
    *ptr=5;  // Dereferencing the pointer
    printf("The value of x is : %d",x);  
    printf("\nThe value of y is : %d",y);  
    return 0;  
}  