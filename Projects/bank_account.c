#include<stdio.h>
#include<stdlib.h>
// #include<string.h>
#include<windows.h>

int new_acc();
int check_acc();
int menu();
void print_dot(int);
void delay(int);



struct date 
{
    int dd, mm, yy;
};

struct {
    char name[30], guardian[30], address[50];
    long int acc_no, check_acc;
    long long mobile;
    struct date dob;
    struct date open;
}add, check;


int new_acc()
{   
    int exit;
    FILE *fp;
    fp= fopen("Bank Details.txt", "a+");
  
  account_no:
    system("cls");
    printf("\n\t\t\t\xb0\xb1\xb2  ADD RECORD  \xb2\xb1\xb0\n\n");
    printf("\n\t\tEnter Account No.:");       
    scanf("%d", &check.acc_no);
    while(fscanf(fp, "%d %s %d/%d/%d %s %lld %s", &add.acc_no, add.name, &add.dob.dd, &add.dob.mm, &add.dob.yy, add.guardian, &add.mobile, add.address)!=EOF)
    {
        if(check.acc_no==add.acc_no)
        {
            printf("Account already exist");
            print_dot(15);
            delay(15);
            goto account_no;
        }
    }
    add.acc_no=check.acc_no;
    fflush(stdin);
    printf("\n\t\tA/C Holder Name:");         
    gets(add.name);
    fflush(stdin);
    printf("\t\tDOB (dd/mm/yyyy):");        
    scanf("%d/%d/%d", &add.dob.dd, &add.dob.mm, &add.dob.yy);
    fflush(stdin);
    printf("\t\tGuardian Name:");           
    gets(add.guardian);
    fflush(stdin);
    printf("\t\tMobile No:");               
    scanf("%lld", &add.mobile);
    fflush(stdin);
    printf("\t\tResidential Address:");     
    gets(add.address);
    /* printf("%d\n%s\n%d/%d/%d\n%s\n%d\n%s", add.acc_no, add.name, add.dob.dd, add.dob.mm, add.dob.yy, add.guardian, add.mobile, add.address); */

    fprintf(fp, "%d %s %d/%d/%d %s %lld %s", add.acc_no, add.name, add.dob.dd, add.dob.mm, add.dob.yy, add.guardian, add.mobile, add.address);
    
    fclose(fp);
    printf("\n\tPlease Wait");
    print_dot(10);
    printf("\t\t\nAccount created successfully..!");
    delay(10);
 try_again:
    printf("\n\n  Press '1' for main menu '0' to Exit:");
    fflush(stdin);
    scanf("%d", &exit);
    if(exit==1)
            {
                menu();
            }
        else if(exit==0)
            {
                printf("\n\n\n\t\xb0\xb0\xb0\xb0---> Thanks for being with us <---\xb0\xb0\xb0\xb0");
            }
        else
            {
                printf("\nInvalid.....!");
                goto try_again;         
            }
    return 0;
}


int check_acc(){
    return 0;
}


int menu()
{
    int choice;
    system("cls");
    printf("\n\t\t\t\t\tWelcome to\n");
    printf("\t\t\xb2\xb2\xb2\xb1\xb1\xb1\xb0\xb0\xb0 DORAEMON'S BANK ACCOUNT MANAGEMENT SYSTEM \xb0\xb0\xb0\xb1\xb1\xb1\xb2\xb2\xb2\n\n");
    printf("\t\t\t\t\t \xb0 MENU \xb0");
    printf("\n\n\t\t\t\t1- Add New Account\n\t\t\t\t2- Check Account Details\n\n\t\tEnter your choice:");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            new_acc();
            break;
        case 2:
            check_acc();
            break;
    }
}


void print_dot(int dots)
{
    int i,j,k;
    for(k=0; k<dots; k++)
        {
            for (i=1; i<=10000; i++)
            {
                for (j=1; j<=1500; j++)
                {    j++;        }
            }
            printf(".");
        }    
}
void delay(int second)
{
	int i,j,k;
	for(k=0; k<second; k++)
		{
			for (i=1; i<=10000; i++)
			{
				for (j=1; j<=1800; j++)
				{       }
			}
		}
}


int main()
{
    int exit;
    char pass_check[10], password[10]="a";
    system("cls");
    printf("\n\n\t\tEnter Password to Login: ");
    scanf("%s", pass_check);
    if(strcmp(pass_check,password)==0)
    {
        printf("\t\tPassword Matched\nLODING");
        print_dot(25);    
        menu();
    }    
    else
    {
        printf("\t\tWrong Password\n"); 
     login_try:
        printf("\nEnter '1' to try again and '0' to exit:");
        fflush(stdin);
        scanf("%d", &exit);
        if(exit==1)
            {
                main();
            }
        else if(exit==0)
            {
                printf("\n\n\n\t\xb0\xb0\xb0\xb0---> Thanks for being with us <---\xb0\xb0\xb0\xb0");
            }
        else
            {
                printf("\nInvalid.....!");
                delay(15);
                goto login_try;         
            }
    }
    return 0;
}