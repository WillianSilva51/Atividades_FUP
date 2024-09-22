#include <stdio.h>

int main()
{

    int jog1, jog2, jog3 = 0;

    scanf("%d", &jog1);
    scanf("%d", &jog2);
    scanf("%d", &jog3);

    if (jog1 == jog2 && jog1 == jog3)
    {
        printf("empate\n");
    }
    
    else if (jog1 != jog2 && jog1 != jog3)
    {
        printf("jog1\n");
    }
    
    else if (jog2 != jog1 && jog2 != jog3)
    {
        printf("jog2\n");
    }
    
    else if (jog3 != jog1 && jog3 != jog2)
    {
        printf("jog3\n");
    }
    
    else
    {
        printf("invalida\n");
    }
    
    return 0;
}