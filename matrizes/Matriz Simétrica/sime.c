#include <stdio.h>
#include <stdlib.h>

const int Nlin = 3;
const int Ncol = 3;

int **criarMatriz()
{
    int **matriz = (int **)malloc(Nlin * sizeof(int *));

    for (int i = 0; i < Nlin; i++)
        matriz[i] = (int *)malloc(Ncol * sizeof(int));

    return matriz;
}

void liberarMatriz(int **matriz)
{
    for (int i = 0; i < Nlin; i++)
        free(matriz[i]);

    free(matriz);
}

void lermatriz(int **matriz)
{
    for (int i = 0; i < Nlin; i++)
        for (int j = 0; j < Ncol; j++)
            scanf("%d", &matriz[i][j]);
}

void simetrica(int **matriz)
{
    int count = 0;

    for (int i = 0; i < Nlin; i++)
        for (int j = 0; j < Ncol; j++)
            if (matriz[i][j] == matriz[j][i])
                count++;

    if (count == 9)
        printf("sim\n");

    else
        printf("nao\n");
}

int main()
{
    int **matriz = criarMatriz();

    lermatriz(matriz);

    simetrica(matriz);
    
    liberarMatriz(matriz);

    return 0;
}