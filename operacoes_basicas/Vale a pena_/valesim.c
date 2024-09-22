#include <stdio.h>

/*
Você deve escrever um programa que receba a quantidade de rolos na maior embalagem disponível (24), e seu preço e 
escreva na tela qual o valor máximo que cada uma das embalagens menores podem estar custando para estarem mais baratas
que a embalagem informada.

Para este exercício, considere que os fabricantes costumam vender pacotes com 4, 8, 12, 16, e 24 rolos.
*/

int main()
{

    int quant = 0;
    float preco24, preco16, preco12, preco8, preco4, valor_unit = 0.0;

    scanf("%d", &quant);
    scanf("%f", &preco24);

    valor_unit = preco24 / quant;
    preco4 = valor_unit * 4;
    preco8 = valor_unit * 8;
    preco12 = valor_unit * 12;
    preco16 = valor_unit * 16;

    printf("%f %f %f %f\n", preco4, preco8, preco12, preco16);

    return 0;
}