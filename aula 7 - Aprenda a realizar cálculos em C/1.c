#include <stdio.h>

int main() {
	float m;
	
	printf("Insira uma nota:\n");
	scanf("%f", &m);
	
	if(m >= 7.0) {
		printf("Aprovado\n");
	} else {
		printf("Reprovado\n");
	}
}
