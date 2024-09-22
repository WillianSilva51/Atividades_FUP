#include <stdio.h>

void inverter(char *frase)
{
    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] >= 'a' && frase[i] <= 'z')
            frase[i] -= 32;

        else if (frase[i] >= 'A' && frase[i] <= 'Z')
            frase[i] += 32;

        else
            continue;
    }

    printf("%s\n", frase);
}

int main()
{
    char frase[50];

    fgets(frase, 50, stdin);

    inverter(frase);
    return 0;
}