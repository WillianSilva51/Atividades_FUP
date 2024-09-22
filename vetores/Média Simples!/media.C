#include <stdio.h>

double media(int quantidade, double* numeros)
{
    double resultado = 0;

    for (int i = 0; i < quantidade; i++)
    {
        resultado += numeros[i];
    }

    resultado = resultado / quantidade;

    return resultado;
}

int main()
{
    int quantidade;

    scanf("%d", &quantidade);

    double numeros[quantidade];

    for (int i = 0; i < quantidade; i++)
    {
        scanf("%lf", &numeros[i]);
    }

    printf("%.1lf\n", media(quantidade, numeros));

    return 0;
}