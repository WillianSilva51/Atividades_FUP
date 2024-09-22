#include <stdio.h>

void lerMatriz(int matriz[][3])
{
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);
}

int somar(int matriz[][3])
{
    int soma = 0;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            soma += matriz[i][j];

    return soma;
}

int main()
{
    int matriz[2][3];

    lerMatriz(matriz);

    printf("%d\n", somar(matriz));

    return 0;
}