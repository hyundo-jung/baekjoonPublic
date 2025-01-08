#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50];
    int i, j, base, len, n = 0, temp;

    scanf("%s %d", str, &base);

    len = strlen(str);

    for (i = len - 1; i >= 0; i--)
    {
        temp = 1;

        for (j = 1; j < len - i; j++)
        {
            temp *= base;
        }

        if (str[i] >= '0' && str[i] <= '9')
        {
            n += (str[i] - 48) * temp;            
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            n += (str[i] - 55) * temp;
        }
    }

    printf("%d \n", n);


    return 0;
}
