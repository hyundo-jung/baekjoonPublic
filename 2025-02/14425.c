#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b)
{
    return (strcmp(*(const char**)a, *(const char**)b));
}

int binarySearch(char** arr, char* word, int low, int high);

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    int i;
    char* S[n];

    for (i = 0; i < n; i++)
    {
        S[i] = malloc(sizeof(char) * 501);
        scanf("%s", S[i]);
    }

    qsort(S, n, sizeof(char*), compare);

    char temp[501];
    int count = 0;

    for (i = 0; i < m; i++)
    {
        scanf("%s", temp);

        if (binarySearch(S, temp, 0, n - 1) == 1)
        {
            count += 1;
        }
    }

    printf("%d \n", count);

    return 0;
}

int binarySearch(char** arr, char* word, int low, int high)
{
    while (high >= low)
    {
        int mid = low + (high - low)/2;

        if (strcmp(arr[mid], word) > 0)
        {
            high = mid - 1;
        }
        else if (strcmp(arr[mid], word) < 0)
        {
            low = mid + 1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
