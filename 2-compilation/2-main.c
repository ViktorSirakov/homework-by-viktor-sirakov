#include <stdio.h>

#define ARRAY_SIZE 10

int stepen(int n, int a)
{
    for(int br = 0; br < a; br++)
    {
        n *= 2;
    }
    return n;
}

void main()
{

    int arr[ARRAY_SIZE], n;
    do
    {
        printf("Enter the amount of elements: ");
        scanf("%d", &n);
    }while(n < 1 || n > ARRAY_SIZE);
    for(int i = 0; i < n; i++)
    {
        arr[i] = stepen(1, i);
    }
    #ifndef ARRAY_SIZE
    printf("\nThe application cannot proceed with this value");
    #elif ARRAY_SIZE > 10 || ARRAY_SIZE < 1
    printf("\nThe application cannot proceed with this value");
    #else
    for(int i = 0; i < n; i++)
    {
        printf("\n%d", arr[i]);
    }
    #endif
}