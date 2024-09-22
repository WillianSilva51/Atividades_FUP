#include <stdio.h>

int main()
{

    int num1, num2, num3, resto, resto2, resto3 = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if (num1 ==  num2 && num3 == num2 && num3 == num1)
    {
        printf("3\n");
    }
    else if ((num1 == num2) || (num3  == num1) || (num2 == num3))
    { 
        printf("2\n");
    }
    else
    {
        printf("1\n");
    }

    return 0;
}