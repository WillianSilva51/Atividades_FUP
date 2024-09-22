#include <stdio.h>

int Contador_de_Letras(char *frase)
{
    int i = 0;

    for (; frase[i] != '\0'; i++);

    return i - 1 ;
}

void CV(char *frase)
{
    int count = Contador_de_Letras(frase);

    char identificacao[count];

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
            identificacao[i] = 'v';

        else if (frase[i] != ' ')
            identificacao[i] = 'c';

        else
            identificacao[i] = ' ';
    }
    
    identificacao[count] = '\0';

    printf("%s\n", identificacao);
}

int main()
{
    char frase[50];

    fgets(frase, 50, stdin);
    fflush(stdin);

    CV(frase);

    return 0;
}