#include <stdio.h>
#define maxcount 100

#define ARR_ENTER {printf("\nEnter an element: "); \
                   scanf("%d", &arr[i]);}

#define ARR_PRINT printf("%d ", arr[i]);

void main()
{
    int arr[maxcount];
    int n;
    do
    {
        printf("\nEnter the amount of elements: ");
        scanf("%d", &n);
    }while(n < 1 || n > maxcount);
    for(int i = 0; i < n; i++)
    {
        ARR_ENTER
    }
    for(int i = 0; i < n; i++)
    {
        ARR_PRINT
    }
}