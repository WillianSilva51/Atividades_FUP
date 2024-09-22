#include <stdio.h>

int posicao(int *vetor, int pos1, int pos2)
{
    int valorSub = vetor[pos1]; 

    vetor[pos1] = vetor[pos2];

    vetor[pos2] = valorSub;

    return *vetor;
}

int main()
{
    int tamanho, pos1, pos2;

    scanf("%d", &tamanho);
    fflush(stdin);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }

    scanf("%d%d", &pos1, &pos2);
    fflush(stdin);

    posicao(vetor, pos1, pos2);

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}