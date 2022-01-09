#include <stdio.h>  

struct student  
{  
   char a;  
   char b;  
   int c;  
  /* char a;
     int c;         //size 16 bytes
     char b; */ 
};  

int main()  
{  
   struct student stud1;  
   printf("The size of the student structure is %d", sizeof(stud1));  
   return 0;  
}  