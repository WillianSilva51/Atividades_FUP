#include <stdio.h>

void contarLetras(char *frase, char letra)
{
    int count = 0;

    if (letra < 97)
        for (int i = 0; frase[i] != '\0'; i++)
        {
            if (frase[i] == letra || frase[i] == (letra + 32))
                count++;
        }
    else
        for (int i = 0; frase[i] != '\0'; i++)
            if (frase[i] == letra || frase[i] == (letra - 32))
                count++;

    printf("%d\n", count);
}

int main()
{
    char frase[100], letra;

    fgets(frase, 100, stdin);
    fflush(stdin);

    scanf("%c", &letra);

    contarLetras(frase, letra);

    return 0;
}