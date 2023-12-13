#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam 200

struct dados_funcionario
{
   char nome[tam];
   char cargo[tam];
   float salario;
};

float mediasalarial(struct dados_funcionario funcionarios[])
{
   int i;
   int contar = 0;
   float soma = 0;

   for (i = 0; i < tam; i++)
   {
      if (strcmp(funcionarios[i].cargo, "programador") == 0)
      {
         contar++;
         soma += funcionarios[i].salario;
      }
   }

   return soma / contar;
}

int main()
{
   setlocale(LC_ALL, "portuguese");

   struct dados_funcionario funcionario[tam];
   int n = 0;
   int opcao;

   do
   {
      printf("\nCódigo.   Descrição  \n");
      printf("   1 -     Cadastro.  \n");
      printf("   2 -  Exibir e Sair.\n");
      printf("\nEscolha a opção desejada:");
      scanf("%d", &opcao);
      system("cls");

      switch (opcao)
      {
      case 1:
         printf("\nSolicitando dados do funcionário.\n");
         fflush(stdin);
         printf("\nNome:");
         gets(funcionario[n].nome);
         fflush(stdin);
         printf("Cargo:");
         gets(funcionario[n].cargo);
         fflush(stdin);
         printf("Salario:");
         scanf("%f", &funcionario[n].salario);

         n++;
         break;
      }

   } while (opcao != 2);

   printf("Média salarial dos Programadores: R$ %.2f\n", mediasalarial(funcionario));

   // media = mediasalarial(funcionario);

   return 0;
}
