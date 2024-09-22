#include <stdio.h>

void starwars(int tamanho, int *vetor)
{
    int resul = 0, resul2 = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (i < tamanho / 2)
            resul += vetor[i];

        else
            resul2 +=vetor[i];
    }

    if (resul > resul2)
        printf("Jedi\n");
    
    else if (resul < resul2)
        printf("Sith\n");

    else
        printf("Empate\n");

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

    starwars(tamanho, vetor);

    return 0;
}