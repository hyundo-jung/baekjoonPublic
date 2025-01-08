#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[5][17] = {'\0'};
    int i, j, max_len = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%s", str[i]);
        if (strlen(str[i]) > max_len)
        {
            max_len = strlen(str[i]);
        }
    }

    for (i = 0; i < max_len; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (str[j][i] != '\0')
            {
                printf("%c", str[j][i]);
            }

        }
    }

    printf("\n");
    return 0;
}
