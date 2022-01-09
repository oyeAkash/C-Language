#include<stdio.h>
void sumVector();

struct vector {
    int x, y, result; 
}v1; 


int main()
{
    printf("Enter two numbers: ");
    scanf("%d %d", &v1.x, &v1.y);
    v1.result = v1.x + v1.y;
    printf("%d + %d = %d",v1.x, v1.y, v1.result);
    return 0;
}