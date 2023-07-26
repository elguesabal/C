#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um texto:\n");
	
	char s[N];
	gets(s);
	int i = strlen(s);
	
	printf("\nTamanho do texto: %d\n\n", i);
	
	printf("Impressão de posição a posição:\n");
	for(i = 0; i < strlen(s); i++) {
		printf("%c", s[i]);
	}
}
