#include <stdio.h>

double media(int soldados, double *altura)
{
    double media = 0;

    for (int i = 0; i < soldados; i++)
        media += altura[i];

    media /= soldados;

    return media;
}

void tamanho(int soldados, double *altura, double media)
{
    char PMG[soldados];

    for (int i = 0; i < soldados; i++)
    {
        if (altura[i] < media)
            PMG[i] = 'P';

        else if (altura[i] > media)
            PMG[i] = 'G';

        else
            PMG[i] = 'M';
    }

    for (int i = 0; i < soldados; i++)
    {
        if (i == soldados - 1)
        {
            printf("%c\n", PMG[i]);
        }

        else
            printf("%c ", PMG[i]);
    }
}

int main()
{
    int soldados;

    scanf("%d", &soldados);
    fflush(stdin);

    double altura[soldados];

    for (int i = 0; i < soldados; i++)
    {
        scanf("%lf", &altura[i]);
        fflush(stdin);
    }

    double Media = media(soldados, altura);

    printf("%.2lf\n", Media);

    tamanho(soldados, altura, Media);

    return 0;
}