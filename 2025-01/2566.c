#include <stdio.h>

int main(void)
{
    int arr[9][9], max = -1, i, j, a, b;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            scanf("%d", &arr[i][j]);

            if (arr[i][j] > max)
            {
                max = arr[i][j];
                a = i;
                b = j;
            }
        }
    }

    printf("%d \n", max);
    printf("%d %d \n", a + 1, b + 1);

    return 0;
}
