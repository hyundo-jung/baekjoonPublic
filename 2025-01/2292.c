#include <stdio.h>

int main(void)
{
    int input, start = 2, end = 7, diff = 5, result = 1;

    scanf("%d", &input);

    if (input != 1)
    {
        while (1)
        {
            if (input >= start && input <= end)
            {
                result++;
                break;
            }
            else
            {
                diff += 6;
                start = end + 1;
                end = start + diff;
                result++;
            }
        }
    }

    printf("%d \n", result);
    return 0;
}
