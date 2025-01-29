#include <stdio.h>

int main(void)
{
    int N, i, temp, n;

    scanf("%d", &N);

    for (i = 1; i < N; i++)
    {
        temp = i; // for each digit
        n = i;

        while(temp > 0)
        {
            n += temp % 10;
            temp /= 10;
        }

        if (n == N)
        {
            N = 0;
            printf("%d \n", i);
            break;
        }
    }

    if (N != 0)
    {
        printf("0 \n");
    }

    return 0;
}
