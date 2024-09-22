#include <stdio.h>

void iguais(int *numeros, int *numeros2, int quantidade)
{
    int resultado = 0;

    for (int i = 0; i < quantidade; i++)
    {
        if (numeros[i] == numeros2[i])
            resultado++;
    }

    if (resultado == quantidade)
        printf("Iguais\n");

    else
        printf("Diferentes\n");
}

int main()
{
    int quantidade, quantidade2;

    scanf("%d", &quantidade);
    fflush(stdin);

    int numeros[quantidade];

    for (int i = 0; i < quantidade; i++)
    {
        scanf("%d", &numeros[i]);
        fflush(stdin);
    }

    scanf("%d", &quantidade2);
    fflush(stdin);

    int numeros2[quantidade2];

    for (int i = 0; i < quantidade2; i++)
    {
        scanf("%d", &numeros2[i]);
        fflush(stdin);
    }

    if (quantidade == quantidade2)
        iguais(numeros, numeros2, quantidade);

    else
        printf("Diferentes\n");

    return 0;
}