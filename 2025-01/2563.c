#include <stdio.h>

int main(void)
{
    int board[100][100] = {0};
    int n, i, j, k, x, y, area = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);

        for (j = x - 1; j < x - 1 + 10; j++)
        {
            for (k = y - 1; k < y - 1 + 10; k++)
            {
                if (board[j][k] == 0)
                {
                    board[j][k] = 1;
                    area += 1;
                }
            }
        }
    }


    printf("%d \n", area);
    return 0;
}
