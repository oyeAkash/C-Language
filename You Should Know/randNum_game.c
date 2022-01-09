#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int number, guess, attempts=1;
    srand(time(0));
    number=rand()%100 + 1;
        printf("Guess the number between 1 to 100:");
    do
    {
        scanf("%d",&guess);
        if(number<guess)
        {
            printf("Lower Number Please..!\n");
        }
        else if(number>guess)
        {
            printf("Higher Number Please..!\n");
        }
        else if(number==guess)
        {
            printf("You Gussed in %d Attempts",attempts);
        }
        attempts++;
        if(attempts==5)
        {
            printf("LAG RHA HAI TUMSE NHI HOGA...KAR LO KOSIS\n");
        }
        else if(attempts==8)
        {
            printf("TUMSE NHI HOGA MAAN JAO MERI BAAT...KAR LO KOSIS FIR SE\n");
        }
        else if(attempts==12)
        {
            printf("TUMSE NHI HOGA RHNE DO CHALO NIKALO....");
            break;
        }
    }
    while(number!=guess);
    getch();
    return 0;
}