#include <stdio.h>
#include <math.h>

/*
Utilize a seguinte fórmula para calcular a área de um triângulo a partir 
do tamanho de seus lados: A = √s(s − a)(s − b)(s − c), onde s = (a+b+c)/2.
*/

int main()
{

    float num1, num2, num3 = 0;

    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    float heron = (num1 + num2 + num3) / 2;
    float resultado = sqrtf(heron * (heron - num1) * (heron - num2) * (heron - num3));

    printf("%.2f\n", resultado);

    return 0;

}