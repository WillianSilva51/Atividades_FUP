#include <stdio.h>

void organizar(char *frase)
{
    char vogais[30] = {}, consoantes[30] = {};

    int count = 0, count2 = 0;

    for (int i = 0; frase[i] >= '\0'; i++)
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
        {
            vogais[count] = frase[i];
            count++;
        }

        else if (frase[i] != ' ')
        {
            consoantes[count2] = frase[i];
            count2++;
        }
    }

    printf("%s\n", vogais);

    printf("%s\n", consoantes);
}

int main()
{
    char frase[100];

    fgets(frase, 100, stdin);
    fflush(stdin);

    organizar(frase);

    return 0;
}