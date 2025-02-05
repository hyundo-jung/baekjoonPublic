#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10];

    scanf("%s", str);

    int len;

    len = strlen(str);
    len--;

    int i, j, swapped, temp;

    for (i = 0; i < len; i++)
    {
        swapped = 0;
        for (j = 0; j < len; j++)
        {
            if ((str[j] - '0') < (str[j+1] - '0'))
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0)
        {
            break;
        }
    }

    for (i = 0; i < len + 1; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
