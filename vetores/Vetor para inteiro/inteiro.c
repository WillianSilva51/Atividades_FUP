#include <stdio.h>
#include <stdlib.h>

void coca(char *numeros)
{
	int numero = atoi(numeros);

		printf("%d\n", numero);
}

int main()
{
    int tamanho;

    scanf("%d", &tamanho);
    fflush(stdin);

    char vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%s", &vetor[i]);
        fflush(stdin);
    }

    coca(vetor);

    return 0;
}