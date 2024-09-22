#include <stdio.h>

typedef struct
{
    float numero1;
    float numero2;
    char simbolo;
} expressao;

void LerConta(expressao *conta)
{
    scanf("%f%f", &conta->numero1, &conta->numero2);
    getchar();

    scanf("%c", &conta->simbolo);
    getchar();
}

void calculo(expressao *conta)
{
    if (conta->simbolo == '+')
        printf("%.f\n", conta->numero1 + conta->numero2);

    else if (conta->simbolo == '-')
        printf("%.f\n", conta->numero1 - conta->numero2);

    else if (conta->simbolo == '*')
        printf("%.f\n", conta->numero1 * conta->numero2);

    else if (conta->simbolo == '/')
        printf("%.2f\n", conta->numero1 / conta->numero2);
}

int main()
{
    expressao conta;

    LerConta(&conta);

    calculo(&conta);

    return 0;
}