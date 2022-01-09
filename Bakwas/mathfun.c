#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int switch_num,variable_1,temp_1,temp_2,variable_2;
    float variable_1f,temp_1f;
    printf("This is the programe of MATHEMATICAL FUNCTIONS\nEnter the given number to know about that func.\n");
    printf("(no.)\t(function)\n1-\t\tabs()\n2-\t\tceil()\n3-\t\tfloor()\n4-\t\tpow()\n5-\t\tsqrt()\n6-\t\tlog10()\n7-\t\tsin(), cos(), tan()");
    scanf("%d",&switch_num);
    
    switch (switch_num)
    {
    case 1:
        printf("\n1- Absolute Value 'abs()' function:\tThis function will convert -ve into +ve\n");
        printf("EXAMPLE-\n\tabs(-10)= %d",abs(-10));
        break;


    case 2:
        printf("\n2- ceil() function:\n");
        printf("If the type of variable is 'integer' then this function will print maximmum integer value less than the given number\nand if the type of vatiable is 'float' then this function will print the maximmum integer value greater than the given number\n");    
        variable_1=4.5;  variable_1f=4.5;
        temp_1=ceil(variable_1);
        temp_1f=ceil(variable_1f);
        printf("EXAMPLE-\n\t'ceil(x-variable-x)' value of 4.5(int type) & 4.5(float type) are %d & %f",temp_1,temp_1f);
        break;
   
   
    case 3:
        printf("\n3- pow() function:\tThis function will calculate the power(^n) of any number\n");        
        temp_1=pow(2,3);
        printf("EXAMPLE-\n\tpow(2,3)=2^3=%d",temp_1); 
        break;
   
   
    case 4:
        printf("\n4- sqrt() function:\tThis function will calculate the square root\n");
        temp_1=sqrt(144);
        printf("EXAMPLE-\n\tsqrt(144)= %d",temp_1);
        break;
   
   
    case 5:
        printf("floor() function:\tThis function will give maximmum integer value but less than the given number");
        temp_1=floor(4.5);
        printf("EXAMPLE-\n\tfloor(4.5) is= %d ",temp_1);
        break;
   
   
    case 6:
        printf("log() function:\tThis function will calculate log vale of given number\n");
        temp_1=log(1000);
        printf("EXAMPLE-\n\tlog(1000)=%d",temp_1);
        break;
   
   
    case 7:
        printf("\n7- sin(), cos(), tan() function:\tThese functions will calculate the sin, cos, tan value of given number\n");
        break;
        
        default:
        printf("WRONG CHOISE");
        break;
    }
    return(0);
    getch();
}