#include <stdio.h>

// versão recursiva
int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;

    int f = fib(n - 1) + fib(n - 2);

    return f;
}

/* versão iterativa
int fib(int n)
{
    int f = 1, fib1 = 1, fib2 = 1, i;
    for (i = 3; i <= n; i++)
    {
        f = fib1 + fib2;
        fib2 = fib1;
        fib1 = f;
    }
    return f;
}
*/

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
}