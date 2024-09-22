#include <stdio.h>

int guerra(int tamanho, int *vetor)
{
    int resultado = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == 0 && (vetor[i - 1] != 1 && vetor[i + 1] != 1))
        {
            resultado++;
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

    printf("%d\n", guerra(tamanho, vetor));

    return 0;
}