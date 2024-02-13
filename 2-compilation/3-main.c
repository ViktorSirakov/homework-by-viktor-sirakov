#include <stdio.h>
#define maxcount 100



void BubbleSort(int* arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            if(arr[j] > arr[j+1])
                {
                    int c = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = c;
                }
        }
    }
}

void StraightSel(int* arr, int n)
{
    int m = n-1;
    for(int i = 0; i < n / 2; i++)
    {
        int min = arr[i];
        int mini = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < min)
            {
                min = arr[j];
                mini = j;
            }
            arr[mini] = arr[i];
            arr[i] = min;
        }
    }
}

void StraightIns(int* arr, int n)
{
    for(int i = 1; i < n; i++)
    {
        int c = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > c)
        {
            arr[j+1] = arr[j];
            j--;
        }
    }
}

void ArrFlip(int* arr, int n)
{
    int m = n - 1;
    for(int i = 0; i < n / 2; i++)
    {
        int c = arr[i];
        arr[i] = arr[m];
        arr[m] = c;
        m--;
    }
}

void main()
{
    int arr[maxcount], n;
    do
    {
        printf("\nEnter the amount of elements: ");
        scanf("%d", &n);
    }while(n < 1 || n > maxcount);
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter an element: ");
        scanf("%d", &arr[i]);
    }
    #ifdef _WIN32
    BubbleSort(arr, n);
    #elif defined __APPLE__
    StraightSel(arr, n);
    #elif defined __LINUX__
    StraightIns(arr, n);
    #else
    ArrFlip(arr, n);
    #endif
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}