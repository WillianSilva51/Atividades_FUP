#include <stdio.h>

void criptografia(char *letra, char simbolo)
{
    if (simbolo == '+')
    {
        letra[2] = (letra[0] + letra[1]) - 97;

        if (letra[2] > 122)
        {
            letra[2] = letra[2] - 122;
            letra[2] = 96 + letra[2];
        }
    }

    else if (simbolo == '-')
    {
        letra[2] = (letra[0] - letra[1]) + 97;

        if (letra[2] < 97)
            letra[2] = letra[2] + 26;
    }
    printf("%c\n",letra[2]);
}

int main()
{
    char letra[3] = {}, simbolo;

    scanf(" %c %c %c", &letra[0], &simbolo, &letra[1]);
    fflush(stdin);

    criptografia(letra, simbolo);

    return 0;
}