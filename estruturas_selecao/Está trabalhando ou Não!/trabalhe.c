#include <stdio.h>

int main()
{

    int dia, hora, minutos = 0;

    scanf("%d", &dia);
    scanf("%d", &hora);
    scanf("%d", &minutos);

    switch (dia)
    {
    case 1: //Domingo
        printf("NAO\n");
        break;
    
    case 2: //Segunda
       
        if (hora < 8 || hora >= 12 && hora < 14 || hora >= 18 )
        {
            printf("NAO\n");
        }
       
        else
        {
            printf("SIM\n");
        }
        
        break;
    
    case 3: //Terça
        
        if (hora < 8 || hora >= 12 && hora < 14 || hora >= 18 )
        {
            printf("NAO\n");
        }
       
        else
        {
            printf("SIM\n");
        }
        
        break;
    
    case 4: //Quarta
        
        if (hora < 8 || hora >= 12 && hora < 14 || hora >= 18 )
        {
            printf("NAO\n");
        }
       
        else
        {
            printf("SIM\n");
        }
        
        break;
    
    case 5: //Quinta
        
        if (hora < 8 || hora >= 12 && hora < 14 || hora >= 18 )
        {
            printf("NAO\n");
        }
       
        else
        {
            printf("SIM\n");
        }
        
        break;
    
    case 6: //Sexta
        
        if (hora < 8 || hora >= 12 && hora < 14 || hora >= 18 )
        {
            printf("NAO\n");
        }
       
        else
        {
            printf("SIM\n");
        }
        
        break;
    
    case 7: //Sabado
        
        if (hora < 8 || hora >= 12)
        {
            printf("NAO\n");
        }
       
        else
        {
            printf("SIM\n");
        }
        
        break;

    default:

        printf("invalida\n");
    
        break;
    }
}