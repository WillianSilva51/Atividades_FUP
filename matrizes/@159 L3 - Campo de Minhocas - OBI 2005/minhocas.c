#include <stdio.h>
#include <stdlib.h>

int **criarmatriz(int Nlin, int Ncol)
{
    int **matriz = (int **)malloc(Nlin * sizeof(int *));

    for (int i = 0; i < Nlin; i++)
        matriz[i] = (int *)malloc(Ncol * sizeof(int));

    return matriz;
}

void limparMatriz(int **matriz, int Nlin)
{
    for (int i = 0; i < Nlin; i++)
        free(matriz[i]);

    free(matriz);
}

void lerMatriz(int **matriz, int Nlin, int Ncol)
{
    for (int i = 0; i < Nlin; i++)
        for (int j = 0; j < Ncol; j++)
            scanf("%d", &matriz[i][j]);
}

int maior(int **matriz, int Ncol)
{
    int soma = 0;

    for (int j = 0; j < Ncol; j++)
        soma += matriz[0][j];

    return soma;
}

int minhoquinhas(int **matriz, int Nlin, int Ncol)
{
    int somalinha = 0, somaColuna = 0, Maior = maior(matriz, Ncol);

    for (int i = 0; i < Nlin; i++)
    {
        somalinha = 0, somaColuna = 0;

        for (int j = 0; j < Ncol; j++)
        {
            somalinha += matriz[i][j];

            if (j < Nlin)
                somaColuna += matriz[j][i];
        }

        if (somalinha > Maior)
            Maior = somalinha;

        if (somaColuna > Maior)
            Maior = somaColuna;
    }

    return Maior;
}

int main()
{
    int Nlin, Ncol;

    scanf("%d%d", &Nlin, &Ncol);

    int **matriz = criarmatriz(Nlin, Ncol);

    lerMatriz(matriz, Nlin, Ncol);

    printf("%d\n", minhoquinhas(matriz, Nlin, Ncol));

    limparMatriz(matriz, Nlin);

    return 0;
}