#include <stdio.h>

void soletrar(char *palavra)
{
    char soletrado[50];
    int count = 1;

    soletrado[0] = '[';

    for (int i = 0; palavra[i] != '\0'; i++, count += 2)
        soletrado[count + 1] = '-', soletrado[count] = palavra[i];

    soletrado[count - 3] = ']', soletrado[count - 2] = '\0';

    printf("%s\n", soletrado);
}

int main()
{
    char palavra[30];

    fgets(palavra, 30, stdin);
    fflush(stdin);

    soletrar(palavra);

    return 0;
}