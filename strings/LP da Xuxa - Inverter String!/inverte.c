#include <stdio.h>

void inverter(char *frase)
{
    int count = 0;

    for (int i = 0; frase[i] != '\0'; i++)
        count++;

    char fraseInv[count];

    for (int i = 0, j = count - 1; j >= 0; i++, j--)
        fraseInv[i] = frase[j];

    fraseInv[count] = '\0';

    printf("%s\n", fraseInv);
}

int main()
{
    char frase[100];

    fgets(frase, 100, stdin);
    fflush(stdin);

    inverter(frase);

    return 0;
}