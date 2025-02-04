#include <stdio.h>

int main(void)
{
    int N, num;
    int count[10001] = {0};
    int i, j;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &num);
        count[num]++;
    }

    for (i = 1; i <= 10000; i++)
    {
        if (count[i] > 0)
        {
            for (j = 0; j < count[i]; j++)
            {
                printf("%d \n", i);
            }
        }
    }
    return 0;
}
