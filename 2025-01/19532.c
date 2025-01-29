#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, x = 0, y = 0, i, j, found = 0;

    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    // y = (double) (c - (double)a/d * f) / (b - (double)a/d * e);

    // x = (c - b * y) / a;

    for (i = 0; i <= 999; i++)
    {
        for (j = 0; j <= 999; j++)
        {
            if (a * i + b * j == c && d * i + e * j == f)
            {
                x = i;
                y = j;
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            for (j = 0; j >= -999; j--)
            {
                if (a * i + b * j == c && d * i + e * j == f)
                {
                    x = i;
                    y = j;
                    found = 1;
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }



    if (found == 0)
    {

        for (i = 0; i >= -999; i--)
        {

            for (j = 0; j <= 999; j++)
            {
                if (a * i + b * j == c && d * i + e * j == f)
                {
                    x = i;
                    y = j;
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                for (j = 0; j >= -999; j--)
                {
                    if (a * i + b * j == c && d * i + e * j == f)
                    {
                        x = i;
                        y = j;
                        found = 1;
                        break;
                    }
                }
            }
            else
            {
                break;
            }
        }
    }

    printf("%d %d \n", x, y);

    return 0;
}
