#include <stdio.h>

int main(void)
{
    int weight, count = 0;

    scanf("%d", &weight);

    while (weight > 0)
    {
        if (weight % 5 == 0)
        {
            count += weight / 5;
            // weight -= (weight / 5) * 5;
            weight = 0;
            break;
        }
        else
        {
            weight -= 3;
            count += 1;
        }
    }

    if (weight == 0 && count != 0)
    {
        printf("%d \n", count);
    }
    else
    {
        printf("-1 \n");
    }
    return 0;
}
