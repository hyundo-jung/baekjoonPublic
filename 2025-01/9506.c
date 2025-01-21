#include <stdio.h>

int main(void)
{
    int n, i, idx, sum;

    while(1)
    {
        scanf("%d", &n);

        if (n == -1)
            break;
        
        int arr[50] = {0};
        idx = 0;
        sum = 0;

        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                arr[idx] = i;
                idx++;
                sum += i;
            }
        }

        if (sum == n)
        {
            printf("%d = ", n);
            for (i = 0; i < idx - 1; i++)
            {
                printf("%d + ", arr[i]);
            }

            printf("%d \n", arr[idx - 1]);
        }
        else
        {
            printf("%d is NOT perfect. \n", n);
        }
    }

    return 0;
}
