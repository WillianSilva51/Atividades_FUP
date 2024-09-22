#include <stdio.h>
#include <math.h>

void orderna(int tamanho, double *vetor)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int count = i; count < tamanho; count++)
        {
            if (vetor[i] >= vetor[count])
            {
                double temp = vetor[i];
                vetor[i] = vetor[count];
                vetor[count] = temp;
            }
        }
    }
}

double mediana(int tamanho, double *vetor)
{
    double resultado = 0;

    if (tamanho % 2 != 0)
    {
        for (int i = 0; i < ceil((float)tamanho / 2); i++)
        {
            resultado = vetor[i];
        }
    }

    else
    {
        for (int i = 0; i < tamanho / 2; i++)
        {
            resultado = vetor[i];
            resultado += vetor[i + 1];   
        }

        resultado /= 2;
    }

    return resultado;
}

int main()
{
    int tamanho;

    scanf("%d", &tamanho);
    fflush(stdin);

    double vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%lf", &vetor[i]);
        fflush(stdin);
    }

    orderna(tamanho, vetor);

    printf("%.1lf", mediana(tamanho, vetor));

    return 0;
}