#include <stdio.h>

//another solutoin: consider count that it takes to create a board that starts with white and black respectively
//compare two values


int main(void)
{
    int N, M, i, j, k, h, countWhite, countBlack, min = 64;

    // start with black
    char arrBlack[8][8];

    // start with white
    char arrWhite[8][8];

    scanf("%d %d", &N, &M);
    getchar();

    char str[N][M];

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%c", &str[i][j]);
        }
        getchar();
    }


    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
                arrWhite[i][j] = 'W';
            else
                arrWhite[i][j] = 'B';
        }
    }


    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
                arrBlack[i][j] = 'B';
            else
                arrBlack[i][j] = 'W';
        }
    }


    for (i = 0; i <= N - 8; i++)
    {
        for (j = 0; j <= M - 8; j++)
        {
            countWhite = 0;
            countBlack = 0;
            for (k = 0; k < 8; k++)
            {
                for (h = 0; h < 8; h++)
                {
                    // printf("%c", str[i + k][j + h]);
                    if (str[i + k][j + h] != arrWhite[k][h])
                    {
                        countWhite += 1;
                    }

                    if (str[i + k][j + h] != arrBlack[k][h])
                    {
                        countBlack += 1;
                    }
                }
            }

            if (countBlack < min)
                min = countBlack;
            
            if (countWhite < min)
                min = countWhite;
        }
    }
    printf("%d \n", min);
}
