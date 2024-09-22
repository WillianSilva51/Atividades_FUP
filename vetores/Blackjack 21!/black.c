#include <stdio.h>

int blackjack(int *vetor, int tamanho)
{
    int resultado = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == 1)
        {
            if (vetor[i] == 1 && vetor[i + 1] == 1)
            {
                vetor[i + 1] = 2;
                continue;
            }
            vetor[i] = 11;
        }
        else if (vetor[i] >= 11 && vetor[i] <= 13)
            vetor[i] = 10;

        resultado += vetor[i];
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

    printf("%d\n", blackjack(vetor, tamanho));

    return 0;
}