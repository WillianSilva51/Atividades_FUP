#include <stdio.h>

int main()
{

    int numero, resultado = 0;

    scanf("%d", &numero);

    for (int i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        { 
            resultado++; 
            break;
        }
    }

        if (resultado == 0 && (numero != 0 && numero != 1)) printf("sim\n");

        else printf("nao\n");

    return 0;
}