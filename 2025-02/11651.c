#include <stdio.h>

void merge_sort(int* arr1, int* arr2, int len);

void merge_sortRecursion(int* arr1, int* arr2, int l, int r);

void merge(int* arr1, int* arr2, int l, int m, int r);

int main(void)
{
    int n, i = 0, idx = 0;

    scanf("%d", &n);

    int arrX[n], arrY[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &arrX[idx], &arrY[idx]);
        idx++;
    }

    merge_sort(arrX, arrY, n);

    
    for (i = 0; i < n; i++)
    {
        printf("%d %d \n", arrX[i], arrY[i]);
    }
    return 0;
}

void merge_sort(int* arr1, int* arr2, int len)
{
    merge_sortRecursion(arr1, arr2, 0, len - 1);
}

void merge_sortRecursion(int* arr1, int* arr2, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l)/2;

        merge_sortRecursion(arr1, arr2, l, m);
        merge_sortRecursion(arr1, arr2, m+1, r);

        merge(arr1, arr2, l, m, r);
    }
}

void merge(int* arr1, int* arr2, int l, int m, int r)
{
    int left_length = m - l + 1;
    int right_length = r - m;

    int left_temp1[left_length];
    int left_temp2[left_length];
    int right_temp1[right_length];
    int right_temp2[right_length];

    int i, j, k;

    for (i = 0; i < left_length; i++)
    {
        left_temp1[i] = arr1[l + i];
        left_temp2[i] = arr2[l + i];
    }
    
    for (i = 0; i < right_length; i++)
    {
        right_temp1[i] = arr1[m + 1 + i];
        right_temp2[i] = arr2[m + 1 + i];
    }

    i = 0, j = 0, k = l;

    while (i < left_length && j < right_length)
    {
        if (left_temp2[i] < right_temp2[j])
        {
            arr1[k] = left_temp1[i];
            arr2[k] = left_temp2[i];
            i++;
        }
        else if (left_temp2[i] == right_temp2[j])
        {
            if (left_temp1[i] < right_temp1[j])
            {
                arr1[k] = left_temp1[i];
                arr2[k] = left_temp2[i];
                i++;
            }
            else
            {
                arr1[k] = right_temp1[j];
                arr2[k] = right_temp2[j];
                j++;
            }
        }
        else
        {
            arr1[k] = right_temp1[j];
            arr2[k] = right_temp2[j];
            j++;
        }
        k++;
    }

    while (i < left_length)
    {
        arr1[k] = left_temp1[i];
        arr2[k] = left_temp2[i];
        i++;
        k++;
    }

    while (j < right_length)
    {
        arr1[k] = right_temp1[j];
        arr2[k] = right_temp2[j];
        j++;
        k++;
    }
}
