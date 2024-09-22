#include <stdio.h>

typedef struct
{
    float numero1;
    float numero2;
} expressao;

void LerConta(expressao *conta)
{
    scanf("%f%f", &conta->numero1, &conta->numero2);
    getchar();
}

void calculo(expressao *conta)
{
    printf("%.f ", conta->numero1 + conta->numero2);

    printf("%.f ", conta->numero1 - conta->numero2);

    printf("%.1f ", conta->numero1 / conta->numero2);

    printf("%.f\n", conta->numero1 * conta->numero2);
}

int main()
{
    expressao conta;

    LerConta(&conta);

    calculo(&conta);

    return 0;
}