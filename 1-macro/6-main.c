#include <stdio.h>
#define maxcount 100

#define SWAP(x, y, TYPE) TYPE c = x; \
                              x = y; \
                              y = c;

#define SORT(LIST, SIZE, TYPE, CMP) \
for (int i = 1; i < SIZE ; i++) \
    for(int j = 0; j < SIZE - i; j++) \
{   \
    if(LIST[j] CMP LIST[j+1]) \
    { \
       SWAP(LIST[j], LIST[j+1], TYPE); \
    } \
}

int main()
{
    int a[maxcount], n;
    do
    {
        printf("Enter the amount of numbers: ");
        scanf("%d", &n);
    }while(n < 1 || n > maxcount);
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter an element: ");
        scanf("%d", &a[i]);
    }
    SORT(a, n, int, >);
    printf("\nLowest to Highest: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    SORT(a, n, int, <);
    printf("\nHighest to Lowest: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}