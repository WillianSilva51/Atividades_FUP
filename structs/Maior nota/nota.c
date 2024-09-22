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

    for (; str[i] != '\0'; i++)
        ;

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

void MaiorNota(aluno *discipulos)
{
    if (discipulos[0].nota > discipulos[1].nota)
        printf("%s , %.1f", discipulos->nome, discipulos->nota);

    else if (discipulos[0].nota < discipulos[1].nota)
        printf("%s , %.1f", discipulos[1].nome, discipulos[1].nota);

    else
        printf("%s e %s , %.1f", discipulos[0].nome, discipulos[1].nome, discipulos[1].nota);
}

int main()
{
    aluno discipulo[2];

    for (int i = 0; i < 2; i++)
        LerAluno(&discipulo[i]);

    MaiorNota(discipulo);

    return 0;
}