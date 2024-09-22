#include <stdio.h>

/*
Ação: Leia dois números e imprima a soma, a subtração,
a multiplicação, a divisão e o resto da divisão entre eles respectivamente.
*/

int main()
{
    int numero1 = 0;
    int numero2 = 0;

    scanf("%d", &numero1);

    scanf("%d", &numero2);

    int soma = numero1 + numero2;
    int subtrac = numero1 - numero2;
    int multiplic = numero1 * numero2;
    float divisao = (float)numero1 / numero2;
    int resto = numero1 % numero2;

    printf("%d\n", soma);
    printf("%d\n", subtrac);
    printf("%d\n", multiplic);
    printf("%.2f\n", divisao);
    printf("%d\n", resto);

    return 0;
}