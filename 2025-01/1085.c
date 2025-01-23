#include <stdio.h>

int main(void)
{
    int x, y, w, h, minDistance;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    minDistance = w - x;

    if (x < minDistance)
        minDistance = x;
    if (h - y < minDistance)
        minDistance = h - y;
    if (y < minDistance)
        minDistance = y;
    
    printf("%d \n", minDistance);
    return 0;
}
