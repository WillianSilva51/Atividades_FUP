#include <stdio.h>

void inverter(int tamanho, int *vetor)
{
    int vetorInv[tamanho], i = 0;

    for (int count = tamanho - 1; count >= 0; count--)
    {
       vetorInv[i] = vetor[count];
       i++;
    }

    for (int i = 0; i < tamanho - 1; i++)
        printf("%d ", vetorInv[i]);

    printf("%d\n", vetorInv[tamanho - 1]);
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

    inverter(tamanho, vetor);

    return 0;
}