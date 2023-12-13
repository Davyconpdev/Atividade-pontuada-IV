#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam 200
#define n 2
#define c 2

struct dados_aluno
{
    char nome[tam];
    char nascimento[tam];
    float nota[c];
    float media;
};

float calculo(float nota[])
{
    int i;
    float soma = 0, media;

    for (i = 0; i < c; i++)
    {
        soma += nota[i];
    }
    return media = soma / c;
}

char *verifiquemedia(float valor)
{
    char situacao[tam];
    if (valor >= 7) {
        strcpy(situacao, "APROVADO");
    }
    else {
        strcpy(situacao, "REPROVADO");}
    return situacao;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_aluno aluno[n];
    int i, y;

    for (i = 0; i < n; i++)
    {
        printf("\nSolicitando dados do %dº aluno.\n", i + 1);
        printf("Nome: ");
        gets(aluno[i].nome);
        fflush(stdin);
        printf("Data de nascimento: ");
        gets(aluno[i].nascimento);
        fflush(stdin);

        for (y = 0; y < c; y++)
        {
            printf("%dº Nota: ", y + 1);
            scanf("%f", &aluno[i].nota[y]);
            fflush(stdin);
        }

        aluno[i].media = calculo(aluno[i].nota);
    }
    system("cls");

    for (i = 0; i < n; i++)
    {
        printf("\nDados do %dº aluno.\n", i + 1);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Data de nascimento: %s\n", aluno[i].nascimento);

        for (y = 0; y < c; y++)
        {
            printf("%dº Nota: %.1f\n", y + 1, aluno[i].nota[y]);
        }
        printf("Média: %.1f\n", aluno[i].media);

        printf("Situação do aluno: %s\n", verifiquemedia(aluno[i].media));
        printf("\n=========================================\n");
    }

    return 0;
}
