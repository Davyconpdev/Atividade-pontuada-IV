#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam 300
#define c 2
#define n 5

struct dadoaluno{
	char nome[tam];
	char nascimento[tam];
	float nota[2];
	float media;	
};

float calculomedia(float nota[]){
	int i, y;
	float soma = 0, media; 
	
	for(i = 0; i < c; i++) {
		soma += nota[i];		
	}
	return media = soma / c;
}

void verifica(float media) {
  int i;

  for(i = 0; i < n; i++) {
  	
	if(media >= 7) {
	printf("Aprovado");
	break;
	} else {
	printf("Reprovado");
	break;	
	}
} 
}

int main() {
	setlocale(LC_ALL,"portuguese");
	
	struct dadoaluno aluno[n];
	int i = 0, y = 0;
	char situacao[tam];
	
	for(i = 0; i < n; i++) {
	fflush(stdin);
	printf("\nNome do %dº aluno: ",i+1);
	gets(aluno[i].nome);
	printf("Data de nascimento: ");
	gets(aluno[i].nascimento);
	fflush(stdin);
	
	for(y = 0; y < c; y++) {
		
	printf("%dª Nota: ",y+1);
	scanf("%f",&aluno[i].nota[y]);	
	}	
		aluno[i].media = calculomedia(aluno[i].nota);
		 
	}
	
	
	system("cls");
	
	
	for(i = 0; i < n; i++) {
	printf("\nNome: %s\n",aluno[i].nome);
	printf("Data de nascimento: %s\n",aluno[i].nascimento);
	
	for(y = 0; y < c; y++) {
	printf("Nota: %.1f\n",aluno[i].nota[y]);
	
	}
	
	printf("Média: %.1f\n",aluno[i].media);
		verifica(aluno[i].media);
	printf("\n==========================\n");
    } 
	
	return 0;
}
