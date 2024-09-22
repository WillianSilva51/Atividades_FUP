#include <stdio.h>

int main()
{

    float gasolina, alcool, valor_real = 0;

    scanf("%f", &gasolina);
    scanf("%f", &alcool);

    valor_real = alcool + ((float) alcool * 30 / 100);

    if (gasolina > valor_real)
    {
        printf("Alcool\n");
    }
    else if (gasolina < valor_real)
    {
        printf("Gasolina\n");
    }
    else
    {
        printf("Invalido\n");
    }
    
    return 0;
}