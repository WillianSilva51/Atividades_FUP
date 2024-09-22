#include <stdio.h>

/*
Os formatos de data e hora são diversos. Leia hora, minuto, dia, mês e ano e imprima no formato hh:mm dd/mm/aa. 
Você deve certificar-se de imprimir um 0 à esquerda para garantir que todas as informações tenham 2 dígitos. 
A hora de entrada poderá aparecer no formato 24 horas, mas apresente-a na saída no formato 12h
*/

int main()
{

    int horas = 0;
    int minutos = 0;
    int dia = 0;
    int mes = 0;
    int ano = 0;

    scanf("%d", &horas);
    scanf("%d", &minutos);
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);
   
    int ano2 = ano % 100;
    int horas2 = horas % 12;

    printf("%02d:%02d %02d/%02d/%02d\n", horas2, minutos, dia, mes, ano2);

    return 0;

}