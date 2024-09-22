#include <stdio.h>

int main()
{

  int inferior, superior, resultado = 0;

  scanf("%d", &inferior);
  scanf("%d", &superior);

  for (int i = inferior; i <= superior; i++)
    {
      if (i % 2 != 0) resultado += i;
      
      else continue;
    }
    
  printf("%d", resultado);

  return 0;
}