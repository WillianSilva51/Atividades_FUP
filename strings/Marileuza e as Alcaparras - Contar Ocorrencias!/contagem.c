#include <stdio.h>

void contagem(char *frase, char *letra)
{
    int count = 0;

    for (int i = 0; frase[i] != '\0'; i++)
        if (frase[i] == letra[0])
            count++;
    
    printf("%d\n", count);
}

int main()
{
    char frase[70], letra[1];

    fgets(frase, 70, stdin);
    fflush(stdin);
    
    scanf("%c", &letra[0]);
    fflush(stdin);

    contagem(frase, letra);

    return 0;
}