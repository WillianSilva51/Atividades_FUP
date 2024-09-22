#include <stdio.h>

int primo(int numero)
{
    int resultado = 0, _primo = 0;

    for (int i = 2; i <= numero; i++)
    {
        for (int count = 1; count <= numero; count++)
        {
            if (i % count == 0)
            {
                _primo++;
            }
        }

        if (_primo <= 2)
        {
            resultado += i;
        }

        _primo = 0;
    }

    return resultado;
}

int nao_primo(int numero)
{
    int resultado = 0, naoprimo = 0;

    for (int i = 1; i <= numero; i++)
    {
        for (int count = 1; count <= numero; count++)
        {
            if (i % count == 0)
            {
                naoprimo++;
            }
        }

        if (naoprimo != 2)
        {
            resultado += i;
        }

        naoprimo = 0;
    }

    return resultado;
}

int main()
{
    int numero = 0;

    scanf("%d", &numero);

    printf("%d\n", nao_primo(numero) - primo(numero));

    return 0;
}