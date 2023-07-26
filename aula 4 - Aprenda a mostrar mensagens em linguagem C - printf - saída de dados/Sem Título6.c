#include <stdio.h>

int main() {
//	int idade = 0;
//	int ano = 1950;
//	
//	printf("Digite uma idade e um ano:\n");
//	scanf("%d %d", &idade, &ano);
//	
//	printf("Idade informada : %d.\n", idade);
//	printf("Ano informado: %d.\n", ano);


	int idade = 0;
	float peso = 0.0;
	
	printf("Digite uma idade:\n");
	scanf("%d", &idade);
	
	printf("Digite um peso:\n");
	scanf("%f", &peso);
	
	printf("Idade informada: %d.\n", idade);
	printf("Ano informado: %.3f.\n", peso);
}
