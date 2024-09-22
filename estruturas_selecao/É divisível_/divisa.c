#include <stdio.h>

int main()
{

    int num1, num2, resto = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    resto = num1 % num2;

    switch (resto)
    {
    case 0:
        printf("sim\n");
        break;
    
    default:
        printf("nao\n");
        break;
    }

    return 0;

}