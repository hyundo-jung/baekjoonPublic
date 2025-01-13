#include <stdio.h>

int main(void)
{
    int n, i, dir = 0, numerator = 1, denominator = 1, l = 1;

    scanf("%d", &n);

    int t = n - 1;

    if (n > 1)
    {
        while (t > 0)
        {
            if (dir == 0 && l == denominator)
            {
                dir = 1;
                denominator++;
                l++;
                t--;
            }
            else if (dir == 1 & l == numerator)
            {
                dir = 0;
                numerator++;
                l++;
                t--;
            }
            else
            {
                for (i = 0; i < l - 1; i++)
                {
                    if (t == 0)
                        break;


                    if (dir == 0)
                    {
                        numerator--;
                        denominator++;
                        t--;
                    }
                    else if (dir == 1)
                    {
                        numerator++;
                        denominator--;
                        t--;
                    }
                }
            }
        }        
    }

    printf("%d/%d \n", numerator, denominator);
    return 0;
}
