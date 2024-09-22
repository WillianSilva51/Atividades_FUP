#include <stdio.h>

struct aluno
{
    char nome[30];
    int matricula;
    char disciplina[30];
    float nota;
};

typedef struct aluno aluno;

void remover_newline(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);

    if (i > 0 && str[i - 1] == '\n')
        str[i - 1] = '\0';
}

void LerAluno(aluno *discipulo)
{
    fgets(discipulo->nome, 30, stdin);
    remover_newline(discipulo->nome);

    scanf("%d", &discipulo->matricula);
    getchar();

    fgets(discipulo->disciplina, 30, stdin);
    remover_newline(discipulo->disciplina);

    scanf("%f", &discipulo->nota);
    getchar();
}

void passouOUnao(aluno *discipulo)
{
    if (discipulo->nota >= 7)
        printf("%s aprovado(a) em %s\n", discipulo->nome, discipulo->disciplina);

    else
        printf("%s reprovado(a) em %s\n", discipulo->nome, discipulo->disciplina);
}

int main()
{
    aluno discipulo[1];

    LerAluno(discipulo);

    passouOUnao(discipulo);

    return 0;
}