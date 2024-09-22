#include <stdio.h>
#include <math.h>

int main()
{

    float valor, total_pago, troco, c100, c50, c20, c10, c5, c2, c1, c050, c025, c010, c005, c001 = 0;

    scanf("%f", &valor);

    scanf("%f", &total_pago);

    if (total_pago < valor)
    {
        printf("Valor Insuficiente, faltaram R$ %.2f\n", valor - total_pago);
    }

    else if (total_pago > valor)
    {
        troco = total_pago - valor;
    
        if (troco >= 100)
        {
            c100 = floorf (troco / 100);
            troco = fmod(troco, 100);
            printf("Cédulas de R$100.00: %.f\n", c100);
        }

        else
        {
            printf("Cédulas de R$100.00: 0\n");   
        }

        if (troco >= 50)
        {
            c50 = floorf (troco / 50);
            troco = fmod(troco, 50);
            printf("Cédulas de R$50.00: %.f\n", c50);
        } 
        
        else
        {
            printf("Cédulas de R$50.00: 0\n");
        }
        
        if (troco >= 20)
        {
            c20 = floorf (troco / 20);
            troco = fmod(troco, 20);
            printf("Cédulas de R$20.00: %.f\n", c20);
        }

        else
        {
            printf("Cédulas de R$20.00: 0\n");
        }   

        if (troco >= 10)
        {
            c10 = floorf (troco / 10);
            troco = fmod(troco, 10);
            printf("Cédulas de R$10.00: %.f\n", c10);
        }

        else
        {
            printf("Cédulas de R$10.00: 0\n");
        }

        if (troco >= 5)
        {
            c5 = floorf (troco / 5);
            troco = fmod(troco, 5);
            printf("Cédulas de R$5.00: %.f\n", c5);
        }

        else
        {
            printf("Cédulas de R$5.00: 0\n");
        }

        if (troco >= 2)
        {
            c2 = floorf (troco / 2);
            troco = fmod(troco, 2);
            printf("Cédulas de R$2.00: %.f\n", c2);
        }

        else
        {
            printf("Cédulas de R$2.00: 0\n");
        }
        
        if (troco >= 1)
        {
            c1 = floorf (troco / 1);
            troco = fmod(troco, 1);
            printf("Moeda de R$1.00: %.f\n", c1);
        }

        else
        {
            printf("Moeda de R$1.00: 0\n");
        }

        if (troco >= 0.50)
        {
            c050 = floorf (troco / 0.50);
            troco = fmod(troco, 0.50);
            printf("Moeda de R$0.50: %.f\n", c050);
        }

        else
        {
            printf("Moeda de R$0.50: 0\n");
        }

        if (troco >= 0.25)
        {
            c025 = floorf (troco / 0.25);
            troco = fmod(troco, 0.25);
            printf("Moeda de R$0.25: %.f\n", c025);
        }

        else
        {
            printf("Moeda de R$0.25: 0\n");
        }

        if (troco >= 0.10)
        {
            c010 = floorf (troco / 0.10);
            troco = fmod(troco, 0.10);
            printf("Moeda de R$0.10: %.f\n", c010);    
        }

        else
        {
            printf("Moeda de R$0.10: 0\n");
        }

        if (troco >= 0.05)
        {
            c005 = floorf (troco / 0.05);
            troco = fmod(troco, 0.05);
            printf("Moeda de R$0.05: %.f\n", c005);
        }

        else
        {
            printf("Moeda de R$0.05: 0\n");
        }

        if (troco >= 0.01)
        {
            c001 = floorf (troco / 0.01);
            troco = fmod(troco, 0.01);
            printf("Moeda de R$0.01: %.f\n", c001);
        }

        else
        {
            printf("Moeda de R$0.01: 0\n");
        }

    }
    
    return 0;
}