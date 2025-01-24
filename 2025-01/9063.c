#include <stdio.h>

int main(void)
{
    int n, minX, minY, maxX, maxY, x, y;

    scanf("%d", &n);

    scanf("%d %d", &x, &y);

    minX = x, maxX = x;
    minY = y, maxY = y;
    n--;

    while(n > 0)
    {
        n--;

        scanf("%d %d", &x, &y);

        if (x > maxX)
            maxX = x;
        else if (x < minX)
            minX = x;

        if (y > maxY)
            maxY = y;
        else if (y < minY)
            minY = y;
    }

    printf("%d \n", (maxX - minX) * (maxY - minY));
    return 0;
}
