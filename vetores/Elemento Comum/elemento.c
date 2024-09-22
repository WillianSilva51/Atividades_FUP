#include <stdio.h>

void iguais(int *numeros, int *numeros2, int quantidade, int quantidade2)
{
    int resultado = 0, count = 0;

    for (int i = 0; i < quantidade; i++)
    {
        for (count = 0; count < quantidade2; count++)
        {
            if (numeros[i] == numeros2[count])
            {
                resultado++;
                break;
            }
        }
        count = 0;
    }

    if (resultado != 0)
        printf("Existe\n");

    else
        printf("Nao existe\n");
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

    iguais(numeros, numeros2, quantidade, quantidade2);

    return 0;
}