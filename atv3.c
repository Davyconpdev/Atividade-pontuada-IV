#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam 200

struct informe_produto
{
    int quantidade;
    char nome[tam];
    float preco;
};

float valorestoque(float valor, float dinheiro)
{
    return valor * dinheiro;
}

int quantproduto(int quantd)
{
    int quantidadep = 100;
    return quantidadep -= quantd;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct informe_produto produto;
    int opcao, qtproduto;
    float montante;

    do
    {
        printf("\nCódigo.     Descrição.    \n");
        printf("   1 -  Realizar uma compra.\n");
        printf("   2 -  Consultar o estoque. \n");
        printf("   3 -   Sair do programa.  \n");
        printf("\nEscolha a opção desejada: \n");
        scanf("%d", &opcao);

        system("cls");
        switch (opcao)
        {
        case 1:
            fflush(stdin);
            printf("Nome do produto:");
            gets(produto.nome);
            fflush(stdin);

            printf("Quantidade:");
            scanf("%d", &produto.quantidade);
            fflush(stdin);

            printf("Preço:");
            scanf("%f", &produto.preco);

            qtproduto = quantproduto(produto.quantidade);
            montante = valorestoque(produto.quantidade, produto.preco);
            break;
        case 2:
            printf("Nome do produto: %s\n", produto.nome);
            printf("Quantidade em estoque: %d\n", qtproduto);
            printf("Valor total do estoque: %.2f\n", montante);
            break;
        }
    } while (opcao != 3);

    return 0;
}
