#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int number, guess, numguess;
    srand(time(0));   
    number=rand();      // will generate random number
//    number=rand()%100 + 1;      // will generate random number b/w 1 - 100  
    printf("Random Number=%d",number);    
    return 0;
}