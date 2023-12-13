#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam 200

struct conta_bancaria
{
    char nome[tam];
    char numero[tam];
    char tipo[tam];
    float saldo;
    float deposito, saque;
};

float deposito(float valor, float valordepositado)
{
    return valor + valordepositado;
}

float saque(float valor, float valorsacado)
{
    return valor - valorsacado;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct conta_bancaria conta;
    int opcao;
    float entrada, saida;

    do
    {
        printf("\nCódigo.     Descrição.    \n");
        printf("   1 -   Dados do cliente. \n");
        printf("   2 -  Depositar um valor.\n");
        printf("   3 -    Sacar um valor.  \n");
        printf("   4 -   Sair do programa. \n");
        printf("\nEscolha a opção desejada: ");
        scanf("%d", &opcao);
        system("cls");
        switch (opcao)
        {
        case 1:
            printf("\nSolicitando dados.\n");
            fflush(stdin);
            printf("\nNome: ");
            gets(conta.nome);
            fflush(stdin);

            printf("Número da conta: ");
            gets(conta.numero);
            fflush(stdin);

            printf("Tipo de conta:");
            gets(conta.tipo);
            fflush(stdin);

            printf("saldo da conta: ");
            scanf("%f", &conta.saldo);
            fflush(stdin);
            break;

        case 2:
            printf("Valor do deposito: ");
            scanf("%f", &conta.deposito);

            entrada = deposito(conta.saldo, conta.deposito);

            printf("\nNome: %s\n", conta.nome);
            printf("\nNúmero da conta: %s\n", conta.numero);
            printf("\nTipo de conta: %s\n", conta.tipo);
            printf("\nSaldo: %.2f\n", conta.saldo);
            printf("\nSaldo atualizado: %.2f\n", entrada);
            break;

        case 3:
            printf("Valor do saque: ");
            scanf("%f", &conta.saque);

            saida = saque(conta.saldo, conta.saque);

            printf("\nNome: %s\n", conta.nome);
            printf("\nNúmero da conta: %s\n", conta.numero);
            printf("\nTipo de conta: %s\n", conta.tipo);
            printf("\nSaldo: %.2f\n", conta.saldo);
            printf("\nSaldo atualizado: %.2f\n", saida);
            break;
        }
    } while (opcao != 4);

    return 0;
}