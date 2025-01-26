#include <stdio.h>

int main(void)
{
    int a, b, c, maxLen = 0, sum = 0, invalid;

    while(1)
    {
        invalid = 0;
        
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

        if (a + b + c == 0)
            break;

        if (a >= b && a >= c)
        {
            maxLen = a;
            sum = b + c;
        }
        else if (b >= a && b >= c)
        {
            maxLen = b;
            sum = a + c;
        }
        else if (c >= a && c >= b)
        {
            maxLen = c;
            sum = a + b;
        }

        if (maxLen >= sum)
            invalid = 1;

        if (invalid == 1)
            printf("Invalid \n");
        else
        {
            if (a == b)
            {
                if (b == c)
                {
                    printf("Equilateral \n");
                }
                else if (b != c)
                {
                    printf("Isosceles \n");
                }
            }
            else if (b == c)
            {
                printf("Isosceles \n");
            }
            else if (a == c)
            {
                printf("Isosceles \n");
            }
            else
            {
                printf("Scalene \n");
            }
        }
    }
    return 0;
}
