#include <stdio.h>

/*
Escreva um programa que, dado o valor N, use esta fórmula para calcular
e imprimir quantas peças existem num jogo de dominó do tipo duplo-N.
*/

int main()
{
    int numero = 0;

    scanf("%d", &numero);

    printf("%d\n", ((numero + 1) * (numero + 2) / 2));

    return 0;
}