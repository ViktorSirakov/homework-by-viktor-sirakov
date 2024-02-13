#include <stdio.h>

#define CMP1 if(a > b) c = a;
#define CMP2 else c = b;
#define CMP3 printf("\nThe greater number is %d", c);
void main()
{
    int a, b, c = 0;
    printf("\nEnter the first number: ");
    scanf("%d", &a);
    printf("\nEnter the second number: ");
    scanf("%d", &b);
    CMP1
    CMP2
    CMP3
}