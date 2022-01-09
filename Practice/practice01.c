#include<stdio.h>
#include<conio.h>

//SELF CREATED FUNCTION
int rightAngleTriangle()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
    printf("\n");    
    }
}


//SELF CREATED FUNCTION
int isoscelesTriangle()
{
    long int i,j;
    int space=4;
    for(i=1; i<=11111; i=i*10+1)
    {
        for(j=1; j<=space; j++)
        {
            printf(" ");
        }
        space--;
        printf("%ld\n",i*i);
    }
    
}

 //SELF CREATED FUNCTION
int reversIsoscelesTriangle()
{
    long int i,j;                    
    int space=1;  
    for(i=1111; i>=1; i=(i-1)/10)                  
    {   
        for(j=1; j<=space; j++)                                
        {                                    
          printf(" ");             
        } 
        printf("%ld\n",i*i);   
        space++;                      
    }     
    
}    


int main()
{
    int i;
    printf("Press 1 to print Numbers in Right Angle Triangle\n");
    printf("Press 2 to print Numbers in Isosceles Triangle\n");
    printf("Press 3 to print Numbers in Barfi Shape\n");
    scanf("%d",&i);
    switch (i)
    {
        case 1:
            rightAngleTriangle();   //FUNCTION CALL 
            break;
        case 2:
            isoscelesTriangle();    //FUNCTION CALL 
            break;
        case 3:
            isoscelesTriangle();
            reversIsoscelesTriangle();
            break;   
        default:
            printf("WRONG CHOICE");
            break;
    }
}