#include <stdio.h>

int main()
{

    int numero = 0, resultado = 0, primo = 0, i = 2;

    scanf("%d", &numero);

   while (i <= numero)
   {
    for (int count = 1; count <= numero; count++)
    {
        if (i % count == 0)
        {
            primo++;
        }
    }
    
        if ( primo <= 2)
        {
            resultado += i;
        }

        primo = 0;
        i++;
   }

    printf("%d", resultado);

    return 0;
}