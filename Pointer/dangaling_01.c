#include <stdio.h>  


int *dangling()
{    
    int y=10;  
    return &y;  
}  

int *not_dangling()
{    
    static int y=10;  
    return &y;  
}  


int main()  
{  
    // int *ptr1= not_dangling();
    int *ptr1= dangling();  /* will show error */
    printf("%d", *ptr1);  
    return 0;  
}  