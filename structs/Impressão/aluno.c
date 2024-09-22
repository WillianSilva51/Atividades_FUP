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

void imprimir(aluno *discipulo)
{
    printf("Nome = %s\n", discipulo->nome);
    printf("Matrícula = %d\n", discipulo->matricula);
    printf("Disciplina = %s\n", discipulo->disciplina);
    printf("Nota = %.2f\n", discipulo->nota);
}

int main()
{
    aluno discipulo[1];

    LerAluno(discipulo);

    imprimir(discipulo);

    return 0;
}