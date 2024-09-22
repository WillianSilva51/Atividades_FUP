#include <stdio.h>
#include <stdlib.h>

char **criarcampo(int Nlin, int Ncol)
{
    char **campo = (char **)malloc(Nlin * sizeof(char *));

    if (campo == NULL)
    {
        fprintf(stderr, "Erro de alocação de memória\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < Nlin; i++)
    {
        campo[i] = (char *)malloc(Ncol * sizeof(char));

        if (campo[i] == NULL)
        {
            fprintf(stderr, "Erro de alocação de memória\n");
            exit(EXIT_FAILURE);
        }
    }
    return campo;
}

void limparCampo(char **campo, int Nlin)
{
    for (int i = 0; i < Nlin; i++)
        free(campo[i]);

    free(campo);
}

void lerCampo(char **campo, int Nlin, int Ncol)
{
    for (int i = 0; i < Nlin; i++)
    {
        for (int j = 0; j < Ncol; j++)
            scanf(" %c", &campo[i][j]);
    }
}

void printarCampo(char **campo, int Nlin, int Ncol)
{
    for (int i = 0; i < Nlin; i++)
    {
        for (int j = 0; j < Ncol; j++)
            putchar(campo[i][j]);

        putchar('\n');
    }
}

int contarMinas(char **campo, int Nlin, int Ncol, int i, int j)
{
    int contadorMinas = 0;

    for (int x = -1; x <= 1; x++)
        for (int y = -1; y <= 1; y++)
        {
            if (x == 0 && y == 0)
                continue;

            int novoI = i + x, novoJ = j + y;

            if (novoI >= 0 && novoI < Nlin && novoJ >= 0 && novoJ < Ncol)
                if (campo[novoI][novoJ] == '*')
                    contadorMinas++;
        }

    return contadorMinas;
}

char **bombas(char **campo, int Nlin, int Ncol)
{
    for (int i = 0; i < Nlin; i++)
        for (int j = 0; j < Ncol; j++)
        {
            if (campo[i][j] == '-')
            {
                int numMinas = contarMinas(campo, Nlin, Ncol, i, j);

                if (numMinas > 0)
                    campo[i][j] = numMinas + '0';
            }
        }

    return campo;
}

int main()
{
    int Nlin, Ncol;

    scanf("%d%d", &Nlin, &Ncol);
    getchar();

    char **campo = criarcampo(Nlin, Ncol);

    lerCampo(campo, Nlin, Ncol);

    campo = bombas(campo, Nlin, Ncol);

    printarCampo(campo, Nlin, Ncol);

    limparCampo(campo, Nlin);

    return 0;
}