#include <stdio.h>

void troca(int *vetor, int *vetor2, int tamanho)
{
    int subs[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        subs[i] = vetor[i];
        vetor[i] = vetor2[i];
        vetor2[i] = subs[i];
    }
}

int main()
{
    int tamanho;

    scanf("%d", &tamanho);
    fflush(stdin);

    int vetor[tamanho], vetor2[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor2[i]);
        fflush(stdin);
    }

    troca(vetor, vetor2, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", vetor[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", vetor2[i]);
    }

    return 0;
}