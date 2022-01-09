#include<stdio.h>
#include<conio.h>
int main()
{
	 int t1=0,t2=1,nextTerm=0,num;
     printf("Enter the number up to which Fibonacci Series you want: ");
	 scanf("%d",&num);
	 nextTerm=t1+t2;
	 while(nextTerm<=num)
    {
		  printf("%d ",nextTerm);
		  t1=t2;
		  t2=nextTerm;
		  nextTerm=t1+t2;
	 }
	 return(0);
	 getch();
}