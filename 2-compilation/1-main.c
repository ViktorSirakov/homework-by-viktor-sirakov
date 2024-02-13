#include <stdio.h>
#define maxcount 100

#define DEBUG

void sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
        for(int j = 0; j < n - i; j++)
        if (a[j] > a[j+1])
        {
            int c = a[j];
            a[j] = a[j+1];
            a[j+1] = c;
        }
}

int sum(int a[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
        {
            if (i % 3 == 0)
            sum += a[i];
        }
    return sum;
}

void main()
{
    int a[maxcount], n;
    do
    {
        printf("\nEnter the amount of numbers: ");
        scanf("%d", &n);
    }while(n < 1 || n > maxcount);
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter an element: ");
        scanf("%d", &a[i]);
    }
    sort(a, n - 1);
    #ifdef DEBUG
    printf("\nSorted version of the array: ");
    printf("\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nHere are the special numbers (% 3 == 0): ");
    for(int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
            printf("%d ", a[i]);
    }
    #else
    printf("\nDEBUG is not defined.");
    #endif
    printf("\nThe sum of the special numbers is %d", sum(a, n));
}