#include <stdio.h>

int main(void)
{
    int n, m, i, j, k, max = 0, val = 0;

    scanf("%d %d", &n, &m);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 2; i++)
    {
        val += arr[i];
        for (j = i + 1; j < n - 1; j++)
        {
            val += arr[j];
            for (k = j + 1; k < n; k++)
            {
                val += arr[k];

                // printf("%d %d %d \n", arr[i], arr[j], arr[k]);
                // printf("%d \n", val);

                if (val > max && val <= m)
                {
                    // printf("%d %d %d \n", i, j, k);
                    // printf("%d \n", val);
                    max = val;
                }

                val -= arr[k];
            }
            val -= arr[j];
        }
        val -= arr[i];
    }

    printf("%d \n", max);

    return 0;
}
