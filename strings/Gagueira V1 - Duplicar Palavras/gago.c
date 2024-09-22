#include <stdio.h>

int contagem_L(char *frase)
{
    int i = 0;

    for (; frase[i] != '\0'; i++);

    frase[i] = ' ';

    return (i * 2) + 2;
}

void gaguejo(char *frase)
{
    int count = contagem_L(frase);

    char gagueira[count];

    for (int i = 0, j = 0; frase[i] != '\0' && gagueira[j] != count; i++, j++)
    {
        gagueira[j] = frase[i];

        if (frase[i] == ' ')
        {
            i = (j - i);
            
            gagueira[j] = ' ';
            
            j++;

            gagueira[j] = frase[i];
        }
    }

    gagueira[count] = '\0';

    printf("%s", gagueira);
}


int main()
{
    char frase[50];

    fgets(frase, 50, stdin);
    fflush(stdin);

    gaguejo(frase);

    return 0;
}