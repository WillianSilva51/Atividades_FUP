#include <stdio.h>

int main()
{

  int numero = 0, resultado = 0, count = 0;

  scanf("%d", &numero);

  for (int i = 0; count < numero; i++)
  {
    if (i % 3 == 0 && i % 7 != 0) {
      resultado += i;
      count++;
    } 
  }

  printf("%d", resultado);

  return 0;
}