#include <stdio.h>

int somaMaior(int *vetor)
{
    int maior = vetor[0], menor = vetor[0];

    for (int i = 0; i < 5; i++)
    {
        if (maior <= vetor[i])
            maior = vetor[i];

        if (menor >= vetor[i])
            menor = vetor[i];
    }
    maior += menor;

    return maior;
}

int main()
{
    int vetor[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }

    printf("%d\n", somaMaior(vetor));

    return 0;
}