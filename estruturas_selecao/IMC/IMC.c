#include <stdio.h>
#include <math.h>

int main()
{
    
    float peso, altura, IMC = 0.0;
   
    scanf("%f", &peso);
    scanf("%f", &altura);

    IMC = peso / powf(altura, 2);

    if (IMC < 17)
    {
        printf("muito abaixo do peso\n");
    }
    else if(17 <= IMC && IMC <= 18.49)
    {
        printf("abaixo do peso\n");
        
    }

    else if (18.5 <= IMC && IMC <= 24.99 )
    {
        printf("peso normal\n");
    }
    else if (25 <= IMC && IMC <= 29.99)
    {
        printf("acima do peso\n");
    }
    else if (30 <= IMC && IMC <= 34.99)
    {
        printf("obesidade\n");
    }
    else if (35 <= IMC && IMC <= 39.99)
    {
        printf("obesidade severa\n");
    }
    
    else
    {
        printf("obesidade morbida\n");
    }
    

    return 0;
}