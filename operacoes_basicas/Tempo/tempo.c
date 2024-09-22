#include <stdio.h>

// Receber um tempo em segundos e transformar no formato: Hora:Minuto:Segundo

int main()
{

    int horas, minutos, segundos, duracao= 0;

    scanf("%d", &duracao);


    horas = duracao / 3600;
    minutos = ((duracao - (horas * 3600))) / 60;
    segundos = (int) duracao % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}