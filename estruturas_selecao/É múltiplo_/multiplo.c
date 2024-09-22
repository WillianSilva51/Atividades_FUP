#include <stdio.h>

int main()
{

    int num1, num2, resto= 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    resto = num1 % num2;

    if (resto == 0)
    {
        printf("sim\n");
    }
    else if (resto != 0)
    {
        printf("nao\n");
    }
    else
    {
        printf("invalido\n");
    }
    
    return 0;
    
}