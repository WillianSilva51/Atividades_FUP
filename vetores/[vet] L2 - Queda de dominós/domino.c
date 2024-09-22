#include <stdio.h>

void domino(int tamanho, int *vetor)
{
    int count = 0;

    for (int i = 0; i < tamanho - 1; i++)
    {
        if (vetor[i] <= vetor[i + 1])
            count++;
    }

    if (count == tamanho - 1)
        printf("ok\n");

    else
        printf("precisa de ajuste\n");
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

    domino(tamanho, vetor);

    return 0;
}