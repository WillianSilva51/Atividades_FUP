#include <stdio.h>

void retorno(char *simbolo)
{
    if (simbolo[0] >= 97 && simbolo[0] <= 122)
            simbolo[0] -= 32;
    
    else if (simbolo[0] >= 65 && simbolo[0] <= 90)
        simbolo[0] += 32;

    printf("%c\n", simbolo[0]);
}

int main()
{
    char simbolo[1];

    scanf("%c", &simbolo[0]);
    fflush(stdin);

    retorno(simbolo);

    return 0;
}