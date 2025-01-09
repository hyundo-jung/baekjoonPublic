#include <stdio.h>

int main(void)
{
    char ans[50];
    int N, B, count = 0, remain, i;

    scanf("%d %d", &N, &B);

    while (N != 0)
    {
        remain = N % B;
        if (remain >= 0 && remain <= 9)
        {   
            ans[count] = remain + 48;
        }
        else
        {
            ans[count] = (N % B) + 55;
        }
        N /= B;
        count++;
    }

    for (i = count - 1; i >= 0; i--)
    {
        printf("%c", ans[i]);
    }
    printf("\n");

    return 0;
}
