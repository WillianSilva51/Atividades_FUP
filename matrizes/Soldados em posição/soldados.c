#include <stdio.h>

void LerSoldados(int soldados[][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &soldados[i][j]);
}

int Farda(int soldados[][3])
{
    int count = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 2, k = 1; j > 0; j--, k--)
            if (soldados[j][i] > soldados[k][i])
                count++;

    return count;
}

int main()
{
    int soldados[3][3];

    LerSoldados(soldados);

    printf("%d\n", Farda(soldados));

    return 0;
}