#include <stdio.h>

int main(void)
{
    int a1, a0, c, n0;

    scanf("%d %d", &a1, &a0);
    scanf("%d", &c);
    scanf("%d", &n0);

    // if (a1 > c)
    // {
    //     printf("0 \n");
    // }
    // else if (a1 * n0 + a0 <= c * n0)
    //     printf("1 \n");
    // else
    //     printf("0 \n");

    if (a1 > c)
    {
        printf("0 \n");
    }
    else if (a1 == c)
    {
        if (a0 > 0)
        {
            printf("0 \n");
        }
        else
        {
            printf("1 \n");
        }
    }
    else if (a1 < c)
    {

        if (a1 * n0 + a0 <= c * n0)
        {
            printf("1 \n");
        }
        else
        {
            printf("0 \n");
        }
    }

    return 0;
}
