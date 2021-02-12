#include <stdio.h>

void update(int *a, int *b)
{
    int sum1, sum2;

    sum1 = *a + *b;
    if (*a >= *b)
    {
        sum2 = *a - *b;
    }
    else
    {
        sum2 = *b - *a;
    }
    *a = sum1;
    *b = sum2;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}