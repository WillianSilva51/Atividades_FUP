#include <stdio.h>
#include <math.h>

/*
Dada a fórmula da distância entre dois pontos e os valores x e y de cada ponto,
imprima a distância entre os pontos com duas casas decimais.
*/

int main()
{

    float x1, y1, x2, y2, resultado = 0;

    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);

    resultado = sqrtf(powf(x2 - x1, 2) + powf(y2 - y1, 2));

    printf("%.2f\n", resultado);

    return 0;
}