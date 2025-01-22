#include <stdio.h>

int main(void)
{
    int M, N, i, j, min = 0, isprime, sum = 0;

    scanf("%d", &M);
    scanf("%d", &N);

    for (i = M; i <= N; i++)
    {
        isprime = 1;

        if (i == 1)
            isprime = 0;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }

        if (isprime == 1 && sum == 0)
            min = i;
        
        if (isprime == 1)
            sum += i;
    }

    if (min == 0)
        printf("-1 \n");
    else
    {
        printf("%d \n", sum);
        printf("%d \n", min);
    }
    return 0;
}
