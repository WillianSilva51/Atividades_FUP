#include <stdio.h>

int main()
{

    int numero, resultado = 0;

    scanf("%d", &numero);

    for (int i = 0; i <= numero; i++)
    {
        resultado += i;
    }
    
    printf("%d", resultado);

    return 0;
}