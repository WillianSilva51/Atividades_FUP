#include <stdio.h>

int main()
{

    int quantidade = 0;
    float media = 0;

    scanf("%d", &quantidade);

    int numero[quantidade];

    for (int i = 0; i <= (quantidade - 1); i++)
    {
        scanf("%d", &numero[i]);
        media += numero[i];
    }
 
    printf("%.2f", media / quantidade);

    return 0;
}