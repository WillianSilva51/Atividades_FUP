#include <stdio.h>

typedef struct
{
    float nota;
    int peso;
} PROVA;

void LerNotas(PROVA *notas)
{
    scanf("%f", &notas->nota);
}

void LerPeso(PROVA *notas)
{
    scanf("%d", &notas->peso);
}

float MediaPond(PROVA *notas, int tamanho)
{
    int peso = 0;
    float aux = 0;

    for (int i = 0; i < tamanho; i++)
    {
        aux += notas[i].nota * notas[i].peso;
        peso += notas[i].peso;
    }

    return aux / peso;
}

int main()
{
    int tam;

    scanf("%d", &tam);

    PROVA notas[tam];

    for (int i = 0; i < tam; i++)
        LerNotas(&notas[i]);

    for (int i = 0; i < tam; i++)
        LerPeso(&notas[i]);

    printf("%.2f", MediaPond(notas, tam));

    return 0;
}