#include <stdio.h>

int contagem(int tamanho, int *vetor)
{
    int count = 0;

    for (int i = 0; i < tamanho - 2; i++)
        if (vetor[i] == 1 && vetor[i + 1] == 0 && vetor[i + 2] == 0)
            count++;

    return count;
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
    
    printf("%d\n", contagem(tamanho, vetor));

    return 0;
}