#include <stdio.h>

int main()
{

    int quantidade = 0;

    scanf("%d", &quantidade);

    int numero[quantidade]; 

    for (int i = 0; i <= (quantidade - 1); i++)
    {
        scanf("%d", &numero[i]);
    }

    int resultado = numero[0];
    int resul = numero[0];
    
    for (int i = 0; i <= (quantidade - 1) ; i++)
    {
    
        if (resultado <= numero[i]) resultado = numero[i];

        if (resul >= numero[i]) resul = numero[i];
        
    }
    
    printf("%d %d\n", resultado, resul);

    return 0;
}