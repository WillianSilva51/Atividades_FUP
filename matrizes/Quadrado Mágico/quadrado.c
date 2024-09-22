#include <stdio.h>

void lerMatriz(int matriz[][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);
}

char *magico(int numeros[][3])
{
    int linha = 0, coluna = 0, diagonal = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            linha += numeros[i][j];
            coluna += numeros[j][i];
        }

        diagonal += numeros[i][i] + numeros[i][2 - i];
    }

    if (linha / 3 == coluna / 3 && linha / 3 == diagonal / 2)
        return "sim";

    return "nao";
}

int main()
{
    int numeros[3][3];

    lerMatriz(numeros);

    printf("%s\n", magico(numeros));

    return 0;
}