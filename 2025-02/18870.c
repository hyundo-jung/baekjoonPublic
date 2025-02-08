#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int key;
    int loc;
    int compress;
} Coor;

int flag = 0;

int compare(const void* a, const void* b)
{
    Coor A = *(Coor*)a;
    Coor B = *(Coor*)b;

    if (!flag)
    {
        if (A.key > B.key)
        {
            return 1;
        }
        else if (A.key < B.key)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if (A.loc > B.loc)
        {
            return 1;
        }
        else if (A.loc < B.loc)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);

    Coor* arr = malloc(n *sizeof(Coor));

    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].key);
        arr[i].loc = i;
        arr[i].compress = 0;
    }

    qsort(arr, n, sizeof(Coor), compare);

    for (i = 1; i < n; i++)
    {
        if (arr[i].key == arr[i - 1].key)
        {
            arr[i].compress = arr[i - 1].compress;
        }
        else
        {
            arr[i].compress = arr[i - 1].compress + 1;
        }
    }

    flag = 1;

    qsort(arr, n, sizeof(Coor), compare);

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i].compress);
    }
    printf("\n");

    free(arr);
    return 0;
}
