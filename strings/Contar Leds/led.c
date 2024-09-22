#include <stdio.h>

int conversaoInt(char *led, int *conversao)
{
    int i = 0;

    for (; led[i] != '\0' && led[i] != '\n'; i++)
        conversao[i] = led[i] - '0';

    return i;
}

int resultado(int *convertido, int tam)
{
    int soma = 0;

    for (int i = 0; i < tam; i++)
    {
        if (convertido[i] == 1)
            soma += 2;

        else if (convertido[i] == 2 || convertido[i] == 3 || convertido[i] == 5)
            soma += 5;

        else if (convertido[i] == 7)
            soma += 3;
        
        else if (convertido[i] == 8)
            soma += 7;

        else if (convertido[i] == 9 || convertido[i] == 0)
            soma += 6;
        
        else // 4 e 6
            soma += convertido[i];
    }

    return soma;
}

int main()
{
    char led[20];
    int convertido[20], casos, tamanho = 0;

    scanf("%d", &casos);
    getchar();

    for (int i = 0; i < casos; i++)
    {
        fgets(led, 20, stdin);

        tamanho = conversaoInt(led, convertido);

        printf("%d Leds\n", resultado(convertido, tamanho));
    }

    return 0;
}