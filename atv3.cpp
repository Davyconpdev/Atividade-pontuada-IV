#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam 300

struct produto{
	char nome[tam];
	int quantidade;
	float preco;
};

float compra(float valor, int quant) {
	return valor * quant;
}

float valortes(float valor){
return 100 * valor;
}

int quantest(int quant){
return 100 - quant;
}

int main() {
	setlocale(LC_ALL,"portuguese");
	
	struct produto p;
	int opcao, i;
	int est;
	float valorf;
	float valt;
	
	do{ 
	   printf("\nCódigo.      Descrição   \n");
	   printf("\n  1 -     Realizar compra.\n");
	   printf("\n  2 -    Consultar estoque.\n");
	   printf("\n  3 -    Sair do programa.\n");
	   printf("\nEscolha a opção desejada: \n");
	   scanf("%d",&opcao);
		system("cls");
		
		switch(opcao) {
			
    case 1:
    	fflush(stdin);
    	printf("\nNome do produto: ");
    	gets(p.nome);
    	printf("Quantidade: ");
    	scanf("%d",&p.quantidade);
    	i++;
    	printf("Valor (R$): ");
    	scanf("%f",&p.preco);
    	
    	system("cls");
    	valorf = compra(p.preco, p.quantidade);
    	printf("Valor da compra: %.2f\n",valorf);
    	break;
    
	case 2:
    	printf("\nNome do produto: %s\n",p.nome);
    	fflush(stdin);
    	valt = valortes(p.preco);
    	printf("Valor total em estoque: %.2f\n",valt);
	    est = quantest(p.quantidade);	
	    printf("Quantidade em estoque: %d\n",est);
    	break;	
		}
		
	} while(opcao != 3);
	
	
	return 0;
}
