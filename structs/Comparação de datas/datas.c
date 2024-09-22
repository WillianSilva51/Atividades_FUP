#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} DATA;

void lerDatas(DATA *datas)
{
    scanf("%d%d%d", &datas->dia, &datas->mes, &datas->ano);
    getchar();
}

void compararDia(DATA *datas)
{
    if (datas[0].dia < datas[1].dia)
        printf("Mais antiga\n");

    else if (datas[0].dia > datas[1].dia)
        printf("Mais recente\n");

    else
        printf("Iguais\n");
}

void compararMes(DATA *datas)
{
    if (datas[0].mes < datas[1].mes)
        printf("Mais antiga\n");

    else if (datas[0].mes > datas[1].mes)
        printf("Mais recente\n");

    else
        compararDia(datas);
}
void CompararAno(DATA *datas)
{
    if (datas[0].ano < datas[1].ano)
        printf("Mais antiga\n");

    else if (datas[0].ano > datas[1].ano)
        printf("Mais recente\n");

    else
        compararMes(datas);
}

int main()
{
    DATA datas[2];

    for (int i = 0; i < 2; i++)
        lerDatas(&datas[i]);

    CompararAno(datas);

    return 0;
}