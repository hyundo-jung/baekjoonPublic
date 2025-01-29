#include <stdio.h>

int main(void)
{
    int n, m, arr[1000000], factor, digit, i, originalVal, temp, result = 0;

    scanf("%d", &n);

    originalVal = n;

    while(n > 0)
    {
        factor = 1, digit = 0;
        n--;

        temp = n;

        while (factor < n)
        {
            factor *= 10;
            digit += 1;
        }
        factor /= 10;

        
        for (i = 0; i < digit; i++)
        {
            arr[i] = temp / factor;
            temp -= factor * arr[i];
            factor /= 10;
        }

        // for (i = 0; i < digit; i++)
        // {
        //     printf("%d ", arr[i]);
        // }
        // printf("\n");

        m = n;

        for (i = 0; i < digit; i++)
        {
            m += arr[i];
            // printf("%d \n", arr[i]);
        }

        if (m == originalVal)
        {
            result = n;
        }
    }

    printf("%d \n", result);

    return 0;
}
