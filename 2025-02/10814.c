#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char* name;
    int age;
} User;

void mergeSort(User* arr, int length);

void mergeSort_Recursion(User* arr, int l, int r);

void merge(User* arr, int l, int m, int r);

int main(void)
{
    int n;

    scanf("%d", &n);

    User arr[n];

    int i;

    for (i = 0; i < n; i++)
    {
        arr[i].name = malloc(sizeof(char) * 101);
        scanf("%d %s", &arr[i].age, arr[i].name);
    }

    mergeSort(arr, n);

    for (i = 0; i < n; i++)
    {
        printf("%d %s \n", arr[i].age, arr[i].name);
    }

    for (i = 0; i < n; i++)
    {
        free(arr[i].name);
    }

    return 0;
}

void mergeSort(User* arr, int length)
{
    mergeSort_Recursion(arr, 0, length - 1);
}

void mergeSort_Recursion(User* arr, int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;

        mergeSort_Recursion(arr, l, m);
        mergeSort_Recursion(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void merge(User* arr, int l, int m, int r)
{
    int left_length = m - l + 1;
    int right_length = r - m;

    User left_temp[left_length];
    User right_temp[right_length];

    int i, j, k;

    for (i = 0; i < left_length; i++)
    {
        left_temp[i] = arr[l + i];
    }

    for (i = 0; i < right_length; i++)
    {
        right_temp[i] = arr[m + 1 + i];
    }

    i = 0, j = 0, k = l;

    while (i < left_length && j < right_length)
    {
        if (left_temp[i].age <= right_temp[j].age)
        {
            arr[k] = left_temp[i];
            i++;
        }
        else
        {
            arr[k] = right_temp[j];
            j++;
        }
        k++;
    }

    while(i < left_length)
    {
        arr[k] = left_temp[i];
        i++;
        k++;
    }

    while(r < right_length)
    {
        arr[k] = right_temp[j];
        j++;
        k++;
    }
}
