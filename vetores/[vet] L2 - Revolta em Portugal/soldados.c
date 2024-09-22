#include <stdio.h>

void revolta(int tamanho, int *vetor)
{
    int soldados = 0, rebeldes = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 2 == 0)
            rebeldes += vetor[i];
        
        else 
            soldados += vetor[i];
    }
    
    if (rebeldes > soldados)
        printf("rebeldes\n");

    else if (soldados > rebeldes)
        printf("soldados\n");
    
    else
        printf("empate\n");
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
    
    revolta(tamanho, vetor);

    return 0;
}