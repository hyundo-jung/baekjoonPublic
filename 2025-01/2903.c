#include <stdio.h>

int main(void)
{
    int N, point = 3, accum = 0, i;

    scanf("%d", &N);

    if (N > 1)
        accum = 1;

    for (i = 0; i < N - 1; i++)
    {
        accum *= 2;
        point += accum;
    }

    point *= point;
    printf("%d \n", point);

    return 0;
}
