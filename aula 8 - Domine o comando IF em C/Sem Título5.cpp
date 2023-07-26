#include <stdio.h>

int main() {
	
	float m;
	
	printf("Insira a nota:\n");
	scanf("%f", &m);
	
	if(m >= 4 && m < 7) {
		printf("Tem direito a exame\n");
	}
}
