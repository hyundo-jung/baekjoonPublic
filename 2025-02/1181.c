#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char* spell;
    int length;
} Word;

void mergeSort(Word* arr, int length);

void mergeSort_Recursion(Word* arr, int l, int r);

void merge(Word* arr, int l, int m, int r);

int main(void)
{
    int n;

    scanf("%d", &n);

    Word arr[n];

    int i, j;

    // have to remove duplicate

    for (i = 0; i < n; i++)
    {
        arr[i].spell = malloc(sizeof(char) * 51);
        scanf("%s", arr[i].spell);
        arr[i].length = strlen(arr[i].spell);
    }

    mergeSort(arr, n);

    char* temp = malloc(sizeof(char) * 51);

    for (i = 0; i < n; i++)
    {
        if (strcmp(arr[i].spell, temp) != 0)
        {
            printf("%s \n", arr[i].spell);
        }
        temp = arr[i].spell;
    }

    for (i = 0; i < n; i++)
    {
        free(arr[i].spell);
    }

    return 0;
}

void mergeSort(Word* arr, int length)
{
    mergeSort_Recursion(arr, 0, length - 1);
}

void mergeSort_Recursion(Word* arr, int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;

        mergeSort_Recursion(arr, l, m);
        mergeSort_Recursion(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void merge(Word* arr, int l, int m, int r)
{
    int left_length = m - l + 1;
    int right_length = r - m;

    Word left_temp[left_length];
    Word right_temp[right_length];

    int i, j, k;

    for (i = 0; i < left_length; i++)
    {
        left_temp[i].spell = arr[l + i].spell;
        left_temp[i].length = arr[l + i].length;
    }

    for (i = 0; i < right_length; i++)
    {
        right_temp[i].spell = arr[m + 1 + i].spell;
        right_temp[i].length = arr[m + 1 + i].length;
    }

    i = 0, j = 0, k = l;
    

    while (i < left_length && j < right_length)
    {
        if (left_temp[i].length < right_temp[j].length)
        {
            arr[k].spell = left_temp[i].spell;
            arr[k].length = left_temp[i].length;
            i++;
        }
        else if (left_temp[i].length > right_temp[j].length)
        {
            arr[k].spell = right_temp[j].spell;
            arr[k].length = right_temp[j].length;
            j++;
        }
        else
        {
            if (strcmp(left_temp[i].spell, right_temp[j].spell) > 0)
            {
                arr[k].spell = right_temp[j].spell;
                arr[k].length = right_temp[j].length;
                j++;
            }
            else
            {
                arr[k].spell = left_temp[i].spell;
                arr[k].length = left_temp[i].length;
                i++;
            }
        }
        k++;
    }

    while (i < left_length)
    {
        arr[k].spell = left_temp[i].spell;
        arr[k].length = left_temp[i].length;
        i++;
        k++;
    }

    while (j < right_length)
    {
        arr[k].spell = right_temp[j].spell;
        arr[k].length = right_temp[j].length;
        j++;
        k++;
    }
}
