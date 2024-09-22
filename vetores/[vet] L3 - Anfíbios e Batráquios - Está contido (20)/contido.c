#include <stdio.h>

void contido(int *vetor, int *vetor2, int tamanho, int tamanho2)
{
    int resultado = 0, i;

    for (int count = 0; count < tamanho; count++)
    {
        for (i = 0; i < tamanho2; i++)
        {
            if (vetor[count] == vetor2[i])
            {
                resultado++;
                break;
            }
        }
        i = 0;
    }

    if (resultado >= tamanho)
        printf("sim\n");

    else
        printf("nao\n");
}

int main()
{
    int tamanho, tamanho2;

    scanf("%d", &tamanho);
    fflush(stdin);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }

    scanf("%d", &tamanho2);
    fflush(stdin);

    int vetor2[tamanho2];

    for (int i = 0; i < tamanho2; i++)
    {
        scanf("%d", &vetor2[i]);
        fflush(stdin);
    }

    contido(vetor, vetor2, tamanho, tamanho2);

    return 0;
}