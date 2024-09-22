#include <stdio.h>

int main()
{
    int base, exponencial = 0;

    scanf("%d", &base);
    scanf("%d", &exponencial);

    const int base1 = base;  

        for (int i = 1; i < exponencial; i++)
        {
            base *= base1;   
        }
    
    if (exponencial == 0) base = 1;

    printf("%d", base);

    return 0;
}