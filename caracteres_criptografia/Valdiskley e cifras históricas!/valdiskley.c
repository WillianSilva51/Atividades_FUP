#include <stdio.h>

void criptografia(char *frase, char *letras, char *letras2)
{
    for (int i = 0; frase[i] != '\0'; i++)
    {
        for (int count = 0; letras[count] != '\0'; count++)
        {
            if (frase[i] == letras[count])
                frase[i] = letras2[count];

            else if (frase[i] == letras2[count])
                frase[i] = letras[count];
        }
    }
    
    printf("%s", frase);
}

int main()
{
    char frase[60], letras[15], letras2[15];

    fgets(frase, 60, stdin);
    fflush(stdin);

    fgets(letras, 15, stdin);
    fflush(stdin);

    fgets(letras2, 15, stdin);
    fflush(stdin);

    criptografia(frase, letras, letras2);

    return 0;
}