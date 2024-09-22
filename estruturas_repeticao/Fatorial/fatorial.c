#include <stdio.h>

int main()
{

    int numero = 0;

    scanf("%d", &numero);

    for (int i = numero - 1; i >= 1; i--)
    {
        numero *= i;
    }

    if (numero == 0) numero += 1;

    printf("%d", numero);

    return 0;
}