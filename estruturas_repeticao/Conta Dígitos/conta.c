#include <stdio.h>

int quantidade_digitos(int numero, int digito)
{
    int quantidade = 0, resto = 0;

    for (int i = 0; numero != 0; i++)
    {
        resto = numero % 10;
        if (resto == digito)
            quantidade++;

        numero /= 10;
    }

    return quantidade;
}

int main()
{

    int digito, numero;

    scanf("%d %d", &digito, &numero);

    printf("%d\n", quantidade_digitos(numero, digito));

    return 0;
}