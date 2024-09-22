#include <stdio.h>

int main()
{

  int numero, resultado = 0;

  scanf("%d", &numero);

  for (int i = 3; i <= numero; i++)
  {
    if (numero < 3)
    {
      resultado = 0;
      break;
    }
    
    else if (numero >= 3)
    {
      resultado += (i + 2);
    }

  }
  
  printf("%d", resultado);

  return 0;
}