#include <stdio.h>

typedef struct
{
    char nome[20];
    float notas[3];
} REG_ALUNO;

void remover_newline(char *nome)
{
    int i = 0;

    for (; nome[i] != '\0'; i++)
        ;

    if (i > 0 && nome[i - 1] == '\n')
        nome[i - 1] = '\0';
}

void LerAluno(REG_ALUNO *aluno)
{
    fgets(aluno->nome, 20, stdin);
    remover_newline(aluno->nome);

    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &aluno->notas[i]);
        getchar();
    }
}

void media(REG_ALUNO *aluno)
{
    float soma[3];

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
            soma[j] += aluno[j].notas[i];

        soma[j] /= 3;

        if (soma[j] >= 7)
            printf("%s %.2f\n", aluno[j].nome, soma[j]);
    }
}

int main()
{
    REG_ALUNO aluno[3];

    for (int i = 0; i < 3; i++)
        LerAluno(&aluno[i]);

    media(aluno);

    return 0;
}