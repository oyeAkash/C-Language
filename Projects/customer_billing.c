#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

void add_customer();
void writeinfile();
void search();
void output();
void delay(int);
void print_dot(int);

struct date
{
    int dd;
    int mm;
    int yy;
};

struct account
{
    long long mobile;
    char name[50];
    struct date payment;
    char city[50];
    float bill;
    float paid;
    // float payback;
} customer;

int t1, t2, t3;

int main()
{
    int ch, cust_num, i;
    system("cls");
menu:
    printf("\n\tWELCOME TO CUSTOMER BILLING SERVICE\n");
    printf("\t===================================\n");
    printf("\t\t    MENU\n");
    printf("\t    1-\tAdd New Customer\n\t    2-\tSearch Existing Customer\n\t    3-\tExit\n\nEnter Your Choice:");
    ch = getche();
    // scanf("%d", &ch);
    switch (ch)
    {
    case '1':
    case1:
        system("cls");
        fflush(stdin);
        printf("\n\nNumber of customers: ");
        scanf("%d", &cust_num);
        if (cust_num > 0 && cust_num <= 5)
        {
            for (i = 0; i < cust_num; i++)
            {
                add_customer();
                writeinfile();
            }
            goto menu;
        }
        else
        {
            printf("Please enter number of customers b/w 1 to 5\n");
            delay(5);
            goto case1;
        }
        break;
    case '2':
        system("cls");
        search();
        goto menu;
        break;
    case '3':
        system("cls");
        printf("\nThis project is designed and coded by AKASH GUPTA.....(' ')");
        break;
    default:
        printf("\nInvalid Input");
        delay(3);
        print_dot(5);
        goto menu;
    }
    return 0;
}

void add_customer()
{
    FILE *ptr = fopen("Customer List.txt", "rb");
    fseek(ptr, 0, SEEK_END);
    t1 = ftell(ptr);
    t2 = sizeof(customer);
    t3 = t1 / t2;
    fseek(ptr, (t3 - 1) * t1, SEEK_SET);
    fread(&customer, sizeof(customer), 1, ptr);
    system("cls");
    printf("\n\t\t        Provide Details\n\n");
    printf("    Moble No: ");
    scanf("%lld", &customer.mobile);
    fflush(stdin);
    printf("    Date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &customer.payment.dd, &customer.payment.mm, &customer.payment.yy);
    fflush(stdin);
    printf("    Name: ");
    gets(customer.name);
    fflush(stdin);
    printf("    City: ");
    gets(customer.city);
    fflush(stdin);
    printf("    Bill Amount: ");
    scanf("%f", &customer.bill);
    fflush(stdin);
    printf("    Paid amount: ");
    scanf("%f", &customer.paid);
    system("cls");
    // pritf("Return amount: %.2f",customer.payback=(customer.bill-customer.paid));

    // fprintf(ptr, "%lld %d/%d/%d %s %s %f %f", customer.mobile, customer.payment.dd, customer.payment.mm, customer.payment.yy, customer.name, customer.city, customer.bill, customer.paid);
    fclose(ptr);
}

void writeinfile()
{
    FILE *ptr = fopen("Customer List.txt", "ab");
    fwrite(&customer, sizeof(customer), 1, ptr);
    fclose(ptr);
}

void search()
{
    char ch, name[30];
    int temp;
    long long mobile;
    FILE *ptr = fopen("Customer List.txt", "rb");
    printf("How you would like to search\n\n");
    printf("\t1-  By Mobile Number\n\t2-  By Name\n");
    printf("\nEnter your choice: ");
    ch = getche();
    switch (ch)
    {
    case '1':
        fseek(ptr, 0, SEEK_END);
        t1 = ftell(ptr);
        t2 = sizeof(customer);
        t3 = t1 / t2;
        fseek(ptr, (t3 - 1) * t1, SEEK_SET);
        fread(&customer, sizeof(customer), 1, ptr);
        do
        {
            system("cls");
            printf("\n\nEnter Mobile No.: ");
            scanf("%lld", &mobile);
            fseek(ptr, 0, SEEK_SET);
            for (int i = 0; i < t3; i++)
            {
                fread(&customer, sizeof(customer), 1, ptr);
                if (mobile == customer.mobile)
                {
                    output();
                    temp = 0;
                    break;
                }
                if (temp != 0)
                {
                    printf("\n\nCustomer doesn't exist");
                }
            }
            printf("\n\nSearch Again(y/n)");
            ch = getche();
        } while (ch == 'y');
        system("cls");
        break;
    case '2':
        fseek(ptr, 0, SEEK_END);
        t1 = ftell(ptr);
        t2 = sizeof(customer);
        t3 = t1 / t2;
        fseek(ptr, (t3 - 1) * t1, SEEK_SET);
        fread(&customer, sizeof(customer), 1, ptr);
        do
        {
            system("cls");
            fflush(stdin);
            printf("\n\nEnter Customer Name: ");
            gets(name);
            fseek(ptr, 0, SEEK_SET);
            for (int i = 0; i < t3; i++)
            {
                fread(&customer, sizeof(customer), 1, ptr);
                if (strcmp(name, customer.name) == 0)
                {
                    output();
                    temp = 0;
                    break;
                }
                if (temp != 0)
                {
                    printf("\n\nCustomer doesn't exist");
                }
            }
            printf("\n\nSearch Again(y/n)");
            ch = getche();
        } while (ch == 'y');
        system("cls");
        break;
    }
    fclose(ptr);
}

void output()
{
    system("cls");
    printf("    Mobile no      :%lld\n", customer.mobile);
    printf("    Name 	   :%s\n", customer.name);
    printf("    City           :%s\n", customer.city);
    printf("    Payment date   :%d/%d/%d\n\n", customer.payment.dd, customer.payment.mm, customer.payment.yy);
}

void delay(int second)
{
    int i, j, k;
    for (k = 0; k < second; k++)
    {
        for (i = 1; i <= 10000; i++)
        {
            for (j = 1; j <= 10000; j++)
            {
            }
        }
    }
}

void print_dot(int dots)
{
    int i, j, k;
    for (k = 0; k < dots; k++)
    {
        for (i = 1; i <= 10000; i++)
        {
            for (j = 1; j <= 1800; j++)
            {
                j++;
            }
        }
        printf(".");
    }
}