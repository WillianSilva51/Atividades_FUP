#include <stdio.h>

int main()
{
    float num, res = 0;

    scanf("%f", &num);

    res = (num < 0) ? num * -1 : num;

    printf("%f\n", res);

    return 0;
}