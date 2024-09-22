#include <stdio.h>

void lerBingo(int bingo[][4])
{
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &bingo[i][j]);
}

int bingado(int bingo[][4], int *numeros)
{
    int count = 0;

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 4; j++)
            for (int k = 0; k < 4; k++)
                if (numeros[i] == bingo[j][k])
                    count++;

    return count;
}

int main()
{
    int numeros[6], bingo[4][4];

    for (int i = 0; i < 6; i++)
        scanf("%d", &numeros[i]);

    lerBingo(bingo);

    printf("%d\n", bingado(bingo, numeros));

    return 0;
}