#include <stdio.h>

int main() {
	float m;
	printf("Insira a nota:\n");
	scanf("%f", &m);
		
	if(m < 7) {
		printf("Reprovado\n");
	} else {
		printf("Aprovado\n");
	}
}
