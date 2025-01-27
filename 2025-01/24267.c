#include <stdio.h>

int main(void)
{
    long int n;
    scanf("%li", &n);

    printf("%li \n3 \n", (n-2)*(n-1)*n/6);
    return 0;
}
