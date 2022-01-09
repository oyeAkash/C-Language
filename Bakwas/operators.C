#include<stdio.h>
#include<conio.h>
int main()
{
	 int a=5,b=3,c0,c1,c2,c3,c4,c5,switchcase;
	 do
	 {
		  printf("\nAll operators will operate on 'a=5' & 'b=3'\n");
		  printf("\nPress 1 for Arithmatical Operator\n");
		  printf("Press 2 for Relational Operator\n");
		  printf("Press 3 for Logical Operator\n");
		  printf("Press 4 for Bitwise Operator\n");
		  scanf("%d",&switchcase);
		switch(switchcase)
		  {
				case 1:
					 printf("\nThese are Arithmatical Operators:");
					 c0=a%b;
					 printf("\n(1) Modulus of 5 & 3 is: %d\n",c0); // % is used for remainder
					 a++;
					 b--;
					 printf("(2) The UNARY Operator a(++) & b(--) values are: %d & %d",a,b);
					 break;
				case 2:
					 printf("\nThese are Relational Operators:\n");
					 printf("< , > , <= , >= , == , !=(not equal)\n");
					 break;
				case 3:
					 printf("\nThese are Logical Operators:\n");
					 printf("(1) && -Logical And\n(2) || -Logical Or\n(3) ! -Logical Not\n");
					 break;
				case 4:
					 c0=a&b;
					 c1=a|b;
					 c2=a^b;
					 c3=~a;
					 c4=a<<2;
					 c5=a>>2;
					 printf("\nThese are Bitwise Operators which works on *Binary Number:\n");
					 printf("(1) a&b -AND= %d\n(2) a|b -OR= %d\n(3) a^b -NOT= %d\n(4) ~a -XOR= %d\n(5) a<<2 -Left Shift= %d\n(6) a>>2 -Right Shift= %d\n",c0,c1,c2,c3,c4,c5);
					 break;
				default:
					 printf("Wrong Choice\n");
		  }
	 }
	 while(switchcase<=4);
	return(0);
	getch();
}