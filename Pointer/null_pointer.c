      /* These are the declaration of Null Pointer*/
// int *ptr=(int *)0;
// float *ptr=(float *)0;
// char *ptr=(char *)0;
// double *ptr=(double *)0;
// char *ptr='\0';
// int *ptr=NULL;

#include <stdio.h>  
int main()  
{  
    int *ptr=NULL;  
    if(ptr!=NULL)  
    {  
        printf("value of ptr is : %d",*ptr);  
    }  
    else  
    {  
        printf("Invalid pointer");  
    }  
  return 0;  
}  