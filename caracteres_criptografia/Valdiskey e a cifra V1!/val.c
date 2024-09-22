#include <stdio.h>

void retorno(char *letra, int num)
{
    letra[0] += num;

    if (letra[0] < 97)
        letra[0] += 26;
    
    else if (letra[0] >122)
        letra[0] -= 26;
    
    printf("%c", letra[0]);

}

int main()
{
    char letra[1];
    int num;

    scanf("%c", &letra[0]);
    fflush(stdin);

    scanf("%d", &num);
    fflush(stdin);

    retorno(letra, num);

    return 0;
}