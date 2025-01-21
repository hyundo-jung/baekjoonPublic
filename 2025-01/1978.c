#include <stdio.h>

int main(void)
{
    int n, i, isPrime = 1, ans = 0, val, factor;
    
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &val);

        factor = 2;
        isPrime = 1;

        if (val == 1)
        {
            isPrime = 0;
        }
        else
        {
            while (factor < val)
            {
                if (val % factor == 0)
                {
                    isPrime = 0;
                    break;
                }
                factor++;
            }
        }

        if (isPrime == 1)
        {
            ans++;
        }

    }

    printf("%d \n", ans);
}
