#include <stdio.h>

void selectionSort(int* arr, int len);

int main(void)
{
    int arr[5], i, sum = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    selectionSort(arr, 5);

    printf("%d \n", sum / 5);
    printf("%d \n", arr[2]);

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
