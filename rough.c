#include<stdio.h>
int sum(int , int);


int sum(int i, int j)
{
   int a;
   a = i+j;
   printf("addition is:%d\n", a);
   return a;
}

int main()
{
   int a ,i = 2, j = 3;
   system("cls");
   a = sum(i , j); //function call by value
   printf("i am nobita\n");
   // sum(7,8);
   return 0;
}
