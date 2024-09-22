#include <stdio.h>

// Escreva um programa que recebe dois números e retorna a média aritmética deles

int main(){
    
    float numero1 = 0;
    float numero2 = 0;
    
    scanf("%f", &numero1);
    scanf("%f", &numero2);
    
    float media = (numero1 + numero2) / 2;
    
    printf("%f", media);
    
    return 0;
    
}