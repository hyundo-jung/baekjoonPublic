#include <stdio.h>

int main(void)
{
    int a, b, n = 1, count = 0;
    scanf("%d %d", &a, &b);

    while(1)
    {
        if (a % n == 0)
        {
            count++;

            if (count == b)
                break;
        }

        if (n > a)
            break;
        
        n++;
    }

    if (b > count)
        printf("0 \n");
    else
        printf("%d \n", n);

    return 0;
}
