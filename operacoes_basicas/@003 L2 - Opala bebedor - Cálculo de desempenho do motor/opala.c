#include <stdio.h>

/*
Um amigo lhe deu a velocidade média do carro dele em km/h, o tempo da viagem em minutos e o 
consumo de um carro em litros e pediu que você faça um programa que calcule o desempenho do motor em km por litro.
*/

int main()
{

    int velocidade, tempo= 0;
    float consumo = 0;

    scanf("%d", &velocidade);
    scanf("%d", &tempo);
    scanf("%f", &consumo);

    float distancia = velocidade * ((float)tempo / 60);
    float desempenho = distancia / consumo;

    printf("%.2f\n", desempenho);

    return 0;


}