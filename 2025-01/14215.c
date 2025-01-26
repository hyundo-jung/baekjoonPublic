#include <stdio.h>

int main(void)
{
    int a, b, c, s1, s2, maxS, perimeter;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        s1 = b;
        s2 = c;
        maxS = a;
    }
    else if (b >= a && b >= c)
    {
        s1 = a;
        s2 = c;
        maxS = b;
    }
    else if (c >= a && c >= b)
    {
        s1 = a;
        s2 = b;
        maxS = c;
    }

    if (maxS >= s1 + s2)
    {
        maxS = (s1 + s2) - 1;
        perimeter = s1 + s2 + maxS;
    }
    else
    {
        perimeter = s1 + s2 + maxS;
    }

    printf("%d \n", perimeter);

    return 0;
}
