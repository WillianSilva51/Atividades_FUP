#include <stdio.h>

int main()
{

    float rufus, rufus2, rufus3 = 0;

    scanf("%f", &rufus);
    scanf("%f", &rufus2);
    scanf("%f", &rufus3);

    if (rufus > rufus2 && rufus > rufus3 && rufus2 > rufus3)
    {
        printf("G M P\n");
    }
    
    else if (rufus > rufus2 && rufus > rufus3 && rufus3 > rufus2)
    {
        printf("G P M\n");
    }
    
    else if (rufus2 > rufus && rufus2 > rufus3 && rufus > rufus3)
    {
        printf("M G P\n");
    }
    
    else if (rufus2 > rufus && rufus2 > rufus3 && rufus3 > rufus)
    {
        printf("P G M\n");
    }
    
    else if (rufus3 > rufus && rufus3 > rufus2 && rufus > rufus2)
    {
        printf("M P G\n");
    }
    
    else if (rufus3 > rufus && rufus3 > rufus2 && rufus2 > rufus)
    {
        printf("P M G\n");
    }

    else
    {
        printf("invalido\n");
    }

    return 0;

}