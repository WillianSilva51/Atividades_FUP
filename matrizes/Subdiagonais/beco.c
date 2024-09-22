#include <stdio.h>

void lerMatriz(int matriz[][5])
{
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d", &matriz[i][j]);
}

int BecoDiagonal(int matriz[][5])
{
    int count = 0;

    for (int i = 0; i < 5; i++)
        count += matriz[i][i] - matriz[i][4 - i];

    return count;
}

int main()
{
    int matriz[5][5];

    lerMatriz(matriz);

    printf("%d\n", BecoDiagonal(matriz));

    return 0;
}