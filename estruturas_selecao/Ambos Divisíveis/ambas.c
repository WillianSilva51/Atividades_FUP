#include <stdio.h>

int main()
{
    int num1, num2, resto3, resto5, resto3_2, resto5_2 = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    resto3 = num1 % 3;
    resto5 = num1 % 5;
    resto3_2 = num2 % 3;
    resto5_2 = num2 % 5;

    if (resto3 == 0 && resto3_2 == 0 || resto5 == 0 && resto5_2 == 0)
    {
        printf("sim\n");
    }
    else
    {
        printf("nao\n");
    }

}