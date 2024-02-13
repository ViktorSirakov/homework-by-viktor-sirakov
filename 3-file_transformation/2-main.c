#include <stdio.h>

void main()
{
    int a, b, max;

    printf("Enter a positive number: ");
    scanf("%d", &a);
    printf("Enter another positive number: ");
    scanf("%d", &b);
    if(a > b)
        max = a;
    else
        max = b;
    while (1)
    {
        if ((max % a == 0) && (max % b == 0)) {
            printf("LCM: %d", max);
            break;
        }
        max++;
    }
}