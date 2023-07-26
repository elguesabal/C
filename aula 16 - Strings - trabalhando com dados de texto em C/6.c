#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char hardText[N] = {"teste"};
	char senha_usr[N];
	
	printf("Digite a senha:\n");
	gets(senha_usr);
	
	int ok = strcmp(hardText, senha_usr);
	
	if(ok == 0) {
		printf("Senha correta\n");
	} else {
		printf("Senha incorreta\n");
	}
}
