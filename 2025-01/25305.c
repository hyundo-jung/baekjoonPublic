#include <stdio.h>

void selectionSort(int* arr, int len);

int main(void)
{
    int n, k, i;

    scanf("%d %d", &n, &k);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    printf("%d \n", arr[n - k]);


    return 0;
}

void selectionSort(int *arr, int len)
{    
    int i, j, min, temp;

    for (i = 0; i < len - 1; i++)
    {
        min = i;
        for (j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
