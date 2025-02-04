#include <stdio.h>

void mergeSort(int* arr, int len);

void mergeSort_recursion(int* arr, int l, int r);

void merge(int* arr, int l, int m, int r);

int main(void)
{
    int n, i;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, n);

    for (i = 0; i < n; i++)
    {
        // printf("%d ", arr[i]);
        printf("%d \n", arr[i]);
    }
    // printf("\n");

    return 0;
}

void mergeSort(int* arr, int len)
{
    mergeSort_recursion(arr, 0, len - 1);
}

void mergeSort_recursion(int* arr, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l)/2;

        mergeSort_recursion(arr, l, m);
        mergeSort_recursion(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void merge(int* arr, int l, int m, int r)
{
    int left_length = m - l + 1;
    int right_length = r - m;

    int temp_left[left_length];
    int temp_right[right_length];

    int i, j, k;

    for (i = 0; i < left_length; i++)
    {
        temp_left[i] = arr[l + i];
    }

    for (i = 0; i < right_length; i++)
    {
        temp_right[i] = arr[m + 1 + i];
    }

    for (i = 0, j = 0, k = l; k <= r; k++)
    {
        if ((i < left_length) && ((temp_left[i] <= temp_right[j]) || j >= right_length))
        {
            arr[k] = temp_left[i];
            i++;
        }
        else
        {
            arr[k] = temp_right[j];
            j++;
        }
    }
}


