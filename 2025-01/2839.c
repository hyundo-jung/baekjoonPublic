#include <stdio.h>

int main(void)
{
    int weight, numThree, numFive, i, j, bag = 100000, found = 0;

    scanf("%d", &weight);

    numThree = weight / 3;
    numFive = weight / 5;


    for (i = numFive; i >= 0; i--)
    {
        for (j = numThree; j >= 0; j--)
        {
            if (i * 5 + j * 3 == weight)
            {
                if (i + j < bag)
                {
                    bag = i + j;
                    found = 1;
                }
            }
        }
    }

    if (found == 1)
    {
        printf("%d \n", bag);
    }
    else
    {
        printf("-1 \n");
    }


    return 0;
}
