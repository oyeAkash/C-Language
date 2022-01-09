#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int matrix_1[5][5], matrix_2[5][5], multiplication[5][5], row_1, row_2, col_1, col_2; // Global Declaration ("extern int" type)

void matrixData_1();
void matrixData_2();
void printMatrix_1();
void printMatrix_2();
void add();
void substract();
void multiply();

int main()
{
    int choose;
    matrixData_1();
    matrixData_2();
    printMatrix_1();
    printMatrix_2();
    printf("Press 1 for Addition\nPress 2 for Substraction\nPress 3 for Multiplication\n");
    scanf("%d",&choose);
    switch (choose)
    {
        case 1:
            add();
            break;
        case 2:
            substract();
            break;
        case 3:
            multiply();
            break;
        default:
            printf("Wrong Choice");
            break;
    }
}

void matrixData_1()
{
    printf("Enter number of rows & colums of First Matrix: ");
	scanf("%d",&row_1);
	scanf("%d",&col_1);
	printf("Enter the data of First Matrix row wise: ");
    for(int i=0; i<row_1; i++){
		for( int j=0; j<col_1; j++){
			scanf("%d",&matrix_1[i][j]);
		}
    }
}

void matrixData_2()
{
    printf("Enter number of rows & colums of Second Matrix: ");
	scanf("%d",&row_2);
	scanf("%d",&col_2);
	printf("Enter the data of First Matrix row wise: ");
    for(int i=0; i<row_2; i++){
		for( int j=0; j<col_2; j++){
			scanf("%d",&matrix_2[i][j]);
		}
    }
}

void printMatrix_1()
{
    printf("Your First matrix is:\n");
	 for(int i=0; i<row_1; i++){
		for(int j=0; j<col_1; j++){
			printf("%d  ",matrix_1[i][j]);
		}
		printf("\n");
    }
}    


void printMatrix_2()
{
    printf("Your Second matrix is:\n");
	 for(int i=0; i<row_2; i++){
		for(int j=0; j<col_2; j++){
			printf("%d  ",matrix_2[i][j]);
		}
		printf("\n");
    }
}    

void add()
{   
    int add[5][5];
	if(row_1==row_2 && col_1==col_2){
		for(int i=0; i<row_1; i++){
			for(int j=0; j<col_2; j++){
				 add[i][j]=matrix_1[i][j] + matrix_2[i][j];
			}
		}
		printf("Addition of Matrix 1 & Matrix 2:\n");
		for(int i=0; i<row_1; i++){
			for(int j=0; j<col_2; j++){
				printf("%d  ",add[i][j]);
			}
		 printf("\n");
		}
	}
	 else
	{
			printf("Rows or Columns are not equal Please Try Again..!");
	}
}


void substract()
{   
    int substract[5][5];
	if(row_1==row_2 && col_1==col_2){
		for(int i=0; i<row_1; i++){
			for(int j=0; j<col_2; j++){
				 substract[i][j]=matrix_1[i][j] - matrix_2[i][j];
			}
		}
		printf("Substract of Matrix 1 & Matrix 2:\n");
		for(int i=0; i<row_1; i++){
			for(int j=0; j<col_2; j++){
				printf("%d  ",substract[i][j]);
			}
		 printf("\n");
		}
	}
	 else
	{
			printf("Rows or Columns are not equal Please Try Again..!");
	}
}


void multiply()
{   
	if(row_1==col_2){
			for(int i=0; i<row_1; i++){
        	    for(int j=0; j<col_2; j++){ 
					multiplication[i][j] == 0;       	
                   		for(int k=0; k<col_1; k++){
				        	multiplication[i][j] += matrix_1[i][k] * matrix_2[k][j];
                    	}
			    }
		    }
		printf("Multiplication of Matrix 1 & Matrix 2:\n");
		for(int i=0; i<row_2; i++){
			for(int j=0; j<col_1; j++){
				printf("%d\t",multiplication[i][j]);
			}
		 printf("\n");
		}
	}
	 else
	{
			printf("Rows or Columns are not equal Please Try Again..!");
	}
}