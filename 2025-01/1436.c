#include <stdio.h>

int main(void)
{   
    int N, val = 665, temp, num, consec, count = 0;

    scanf("%d", &N);

    // another solution is using % 1000 and check when reminder is 666

    while (N > count)
    {
        val++;
        consec = 0;

        temp = val;

        while (temp > 0)
        {
            if (temp % 10 == 6)
            {
                if (consec == 0)
                {
                    consec = 1;
                }
                else
                {
                    consec++;
                }

                if (consec == 3)
                {
                    count++;
                    break;
                }
            }
            else
            {
                consec = 0;
            }

            temp /= 10;
        }

    }
    
    printf("%d \n", val);
    
    return 0;
}
