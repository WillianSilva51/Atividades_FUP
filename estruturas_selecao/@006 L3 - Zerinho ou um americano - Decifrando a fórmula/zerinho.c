#include <stdio.h>

int main()
{

    int jog1, jog2, jog3, jog4, soma, resto = 0;

    scanf("%d", &jog1);
    scanf("%d", &jog2);
    scanf("%d", &jog3);
    scanf("%d", &jog4);

    soma = jog1 + jog2 + jog3 + jog4;
   
    if (soma == 0)
    {
        printf("nenhum\n");
    }
    
    else if (soma > 0)
    {
        resto = soma % 4;
        
        switch (resto)
    {
    case 0:
        printf("jog4\n");
        break;

    case 1:
        printf("jog1\n");
        break;
    
    case 2:
        printf("jog2\n");
        break;

    case 3:
        printf("jog3\n");
        break;

    case 4:
        printf("jog4\n");
        break;

    default:
        printf("inválido\n");
        break;
    }

    }
    
    return 0;
    
}