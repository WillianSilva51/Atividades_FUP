#include <stdio.h>

void orderna(int tamanho, int *vetor)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int count = i; count < tamanho; count++)
        {
            if (vetor[i] >= vetor[count])
            {
                int temp = vetor[i];
                vetor[i] = vetor[count];
                vetor[count] = temp;
            }
        }
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", vetor[i]);
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

    orderna(tamanho, vetor);

    return 0;
}