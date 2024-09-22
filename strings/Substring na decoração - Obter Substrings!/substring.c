#include <stdio.h>

void substring(char *frase, int indice, int quantidade)
{
    char Substring[quantidade];
    int count = 0;

    for (int i = indice; frase[i] != '\0'; i++, count++)
    {
        Substring[count] = frase[i];

        if (count >= quantidade)
            break;
    }

    Substring[count] = '\0';

    printf("%s\n", Substring);
}

int main()
{
    char frase[50];
    int indiceInicial, quantCaracteres;

    fgets(frase, 50, stdin);
    fflush(stdin);

    scanf("%d%d", &indiceInicial, &quantCaracteres);
    fflush(stdin);

    substring(frase, indiceInicial, quantCaracteres);

    return 0;
}