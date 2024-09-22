#include <stdio.h>
#include <string.h>

// Retorna o números de ocorrências do caractere 'c' na string 's' (com 'n' caracteres).
// Algoritmo deve ser recursivo e sem comandos de repetição.
int conta_char_rec(char s[], int n, char c, int i)
{
   if (i >= n)
      return 0;

   return (s[i] == c) + conta_char_rec(s, n, c, i + 1);
}

int main()
{
   char s[102], c;

   fgets(s, sizeof(s), stdin);

   scanf("%c", &c);

   int n = strlen(s) - 1;

   printf("%d", conta_char_rec(s, n, c, 0));
}