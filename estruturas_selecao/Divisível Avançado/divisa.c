#include <stdio.h>

int main()
{

    int num1, resto3, resto5, resto7 = 0;

    scanf("%d", &num1);

    resto3 = num1 % 3;
    resto5 = num1 % 5;
    resto7 = num1 % 7;

    if (resto3 == 0 && resto5 == 0 && resto7 != 0)
    {
        printf("sim\n");
    }
    else
    {
        printf("nao\n");
    }
    
}