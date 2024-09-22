#include <stdio.h>

int main()
{

    int num1 = 0, num2 = 0;
    char operac;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf(" %c", &operac);


    if (operac == '+')
    {
        printf("%d\n", num1 + num2);
    }

    else if (operac == '-')
    {
        printf("%d\n", num1 - num2);
    }

    else if (operac == '*')
    {
        printf("%d\n", num1 * num2);
    }

    else if (operac == '/')
    {
        if (num2 == 0)
        {
            printf("invalida");
        }
        
        else
        { 
            printf("%.1f", (float) num1 / num2);
        }
    }

    else
    {
        printf("invalida\n");
    }

    return 0;

}