#include <stdio.h>

int main(void)
{
    int num, q, d, n, p, value, i;

    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        q = 0, d = 0, n = 0, p = 0;

        scanf("%d", &value);

        while (value >= 25)
        {
            value -= 25;
            q++;
        }

        while (value >= 10)
        {
            value -= 10;
            d++;
        }

        while (value >= 5)
        {
            value -= 5;
            n++;
        }

        while (value >= 1)
        {
            value -= 1;
            p++;
        }

        printf("%d %d %d %d \n", q, d, n, p);
    }
    return 0;
}
