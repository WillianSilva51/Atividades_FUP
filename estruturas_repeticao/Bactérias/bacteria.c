#include <stdio.h>

int main()
{

    int bacteria = 1, segundos = 0; 

    scanf("%d", &segundos);

    for (int i = 1; i <= segundos ; i++)
    {
        bacteria *= 2;
    }
    
    printf("%d", bacteria);

    return 0;
}