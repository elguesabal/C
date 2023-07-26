#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 3

struct tipo_pessoa {
	int idade;
	float peso;
	char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	tipo_pessoa lista[TAM];
	
	int i;
	for(i = 0; i < TAM; i++) {
		printf("Insira os dados (%d):\n", i + 1);
		
		puts("Nome: ");
		scanf("%50[^\n]s", &lista[i].nome);
		fflush(stdin);
		
		puts("Idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		puts("Peso: ");
		scanf("%f", &lista[i].peso);
		fflush(stdin);
	}
	
	system("cls");
	
	puts("Dados:\n");
	for(i = 0; i < TAM; i++) {
		printf("-------------- Pessoa (%d) --------------\n", i + 1);
		printf("Nome: %s\n", lista[i].nome);
		printf("Idade: %d\n", lista[i].idade);
		printf("Peso: %.2f\n", lista[i].peso);
	}
//	printf("--------------------------------\n");
	for(i = 0; i < 50; i++) {
		printf("-");
	}
}
