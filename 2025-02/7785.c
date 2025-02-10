#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person
{
    char name[10];
    char status[10];

} Person;

int compare(const void* a, const void* b)
{
    Person p1 = *(Person *)a;
    Person p2 = *(Person *)b;

    return strcmp(p2.name, p1.name);
}

int main(void)
{
    int N;

    scanf("%d", &N);

    Person* log = malloc(sizeof(Person) * N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s %s", log[i].name, log[i].status);
    }

    qsort(log, N, sizeof(Person), compare);

    for (int i = 0; i < N; i++)
    {
        if (i != N - 1 && strcmp(log[i + 1].status, "leave") == 0)
        {
            i += 1;
        }
        else
        {
            printf("%s \n", log[i].name);
        }
    }
    return 0;
}
