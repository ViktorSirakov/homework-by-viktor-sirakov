#include <stdio.h>
#include <math.h>


#define maxcount 100

void main()
{
    long arr[maxcount];
    int n;
    do
    {
        printf("Enter the amount of elements: ");
        scanf("%d", &n);
    }while(n < 1 || n > maxcount);
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter an element: ");
        scanf("%ld", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        arr[i] = pow(arr[i], 4);
    }
    for(int i = 0; i < n; i++)
    {
        printf("\n %ld", arr[i]);
    }
}