#include <stdio.h>

int main(void)
{
    int A, B, V, h = 0, d = 0;

    scanf("%d %d %d", &A, &B, &V);

    d = (V - A) / (A - B);

    while (1)
    {
        if (A * d - B * d + A < V)
        {
            d += 1;
        }
        else
        {
            d += 1;
            break;
        }
    }

    printf("%d \n", d);

    return 0;
}
