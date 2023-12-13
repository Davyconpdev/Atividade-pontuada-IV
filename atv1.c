#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam 200
#define n 3

struct dados_contatos
{
    char nome[tam];
    char telefone[tam];
    char email[tam];
};

void limpatela()
{
    system("cls");
}

void limpacache()
{
    fflush(stdin);
}

void buscartelefone(struct dados_contatos contato[], char *contatodesejado)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (strcmp(contato[i].nome, contatodesejado) == 0)
        {
            printf("\nTelefone de %s: \n%s", contato[i].nome, contato[i].telefone);
            break;
        }
    }
    printf("\nContato não encontrado.");
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_contatos contato[n];
    int i = 0;
    char contatodesejado[tam];

    for (i = 0; i < n; i++)
    {
        printf("\nSolicitando dados do usuário.\n");
        printf("\nNome:");
        gets(contato[i].nome);
        limpacache();

        printf("Número:");
        gets(contato[i].telefone);
        limpacache();

        printf("Email:");
        gets(contato[i].email);
        limpatela();
    }
    limpatela();

    printf("\nDigite o nome do contato que deseja buscar: ");
    gets(contatodesejado);

    buscartelefone(contato, contatodesejado);

    return 0;
}