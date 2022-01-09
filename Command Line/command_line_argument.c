#include <stdio.h>  
void main(int argc, char *argv[] )  {    
    
/* here 'argc' is number of argument passed 
    -->it counts file name as first argument*/
/* 'argv[]' contains the address of all aguments
    -->first argument is always file name */
  
   printf("Program name is: %s\n", argv[0]);  
   
   if(argc < 2){  
      printf("No argument passed through command line.\n");  
   }  
   else{  
      printf("First argument is: %s\n", argv[1]);  
   }  
}  