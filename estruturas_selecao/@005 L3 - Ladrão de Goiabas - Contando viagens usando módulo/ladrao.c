#include <stdio.h>
#include <math.h>

int main(){

    int cesta, bananas, goiabas, mangas = 0;

    scanf("%d", &cesta);
    scanf("%d", &bananas);
    scanf("%d", &goiabas);
    scanf("%d", &mangas);

    float piso = ((int)bananas + goiabas + mangas) / (float) cesta;

    int resultado = ceil(piso);

    printf("%d\n", resultado);

    return 0;
}