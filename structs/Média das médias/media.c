#include <stdio.h>

typedef struct
{
    char nome[20];
    float notas[3];
} REG_ALUNO;

void LerAluno(REG_ALUNO *aluno)
{
    fgets(aluno->nome, 20, stdin);

    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &aluno->notas[i]);
        getchar();
    }
}

void media(REG_ALUNO *aluno)
{
    float soma = 0;

    for (int j = 0; j < 2; j++)
        for (int i = 0; i < 3; i++)
            soma += aluno[j].notas[i];

    printf("%.2f\n", (soma / 3) / 2);
}

int main()
{
    REG_ALUNO aluno[2];

    for (int i = 0; i < 2; i++)
        LerAluno(&aluno[i]);

    media(aluno);

    return 0;
}