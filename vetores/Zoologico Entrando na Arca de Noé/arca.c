#include <stdio.h>

int zoo(int tamanho, int *vetor)
{
    int resultado = 0;

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = i; j < tamanho; j++)
        {
            if (vetor[i] * -1 == vetor[j])
            {
                resultado++;
                vetor[i] = 0;
                vetor[j] = 10;
                break;
            }
        }
    }

    return resultado;
}

int main()
{
    int tamanho;

    scanf("%d", &tamanho);
    fflush(stdin);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }

    printf("%d\n", zoo(tamanho, vetor));

    return 0;
}