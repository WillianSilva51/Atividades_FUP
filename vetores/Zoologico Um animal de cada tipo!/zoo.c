#include <stdio.h>

void ordenar(int tamanho, int *vetor)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int count = i; count < tamanho; count++)
        {
            if (vetor[i] > vetor[count])
            {
                int temp = vetor[i];
                vetor[i] = vetor[count];
                vetor[count] = temp;
            }
        }
    }
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

    ordenar(tamanho, vetor);

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == vetor[i + 1])
            continue;

        else
            printf("%d\n", vetor[i]);
    }

    return 0;
}