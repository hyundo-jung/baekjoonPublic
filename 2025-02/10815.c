#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return (*((int*)a) - *((int*)b));
}

int binarySearch(int* arr, int val, int low, int high);

int main(void)
{
    int n;

    scanf("%d", &n);

    int i, arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    int m;

    scanf("%d", &m);

    int card[m];

    for (i = 0; i < m; i++)
    {
        scanf("%d", &card[i]);
    }

    for (i = 0; i < m; i++)
    {
        printf("%d ", binarySearch(arr, card[i], 0, n - 1));
    }
    printf("\n");
    return 0;
}

int binarySearch(int* arr, int val, int low, int high)
{

    while (low <= high)
    {
        int m = (low + high) / 2;

        if (arr[m] > val)
        {
            high = m -1;
        }
        else if (arr[m] < val)
        {
            low = m + 1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
