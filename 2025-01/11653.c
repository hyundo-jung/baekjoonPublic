#include <stdio.h>

int main(void)
{
    int N, i, factor = 2;

    scanf("%d", &N);

    if (N != 1)
    {
        while (N != 1)
        {
            if (N % factor == 0)
            {
                printf("%d \n", factor);
                N /= 2;
            }
            else
                factor++;
        }
    }
    return 0;
}
