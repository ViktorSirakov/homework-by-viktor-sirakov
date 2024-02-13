#include <stdio.h>
#define SWAP(x, y, TYPE) TYPE c = x; \
                              x = y; \
                              y = c;

void main()
{
    int a, b;
    printf("\nEnter the first value: ");
    scanf("%d", &a);
    printf("\nEnter the second value: ");
    scanf("%d", &b);
    SWAP(a, b, int);
    printf("\nSwapped values: %d, %d", a, b);
}