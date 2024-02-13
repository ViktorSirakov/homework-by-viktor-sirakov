#include <stdio.h>
#define SQUARE(A, B) (A + B) * (A + B)

void main()
{
    float a, b;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("\nEnter the second number: ");
    scanf("%f", &b);
    printf("\nSquare of the sum of the numbers: %f", SQUARE(a, b));
}