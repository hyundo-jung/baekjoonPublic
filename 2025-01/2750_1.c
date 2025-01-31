#include <stdio.h>

void selectionSort(int* arr, int len);

int main(void)
{
    int n, i;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    selectionSort(arr, n);

    for (i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }

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
