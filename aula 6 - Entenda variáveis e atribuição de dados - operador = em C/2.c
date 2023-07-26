#include <stdio.h>

int main() {
	int dado;
	printf("Digite um numero:\n");
	scanf("%d", &dado);
	
	dado++;
	printf("Foi incrementado 1: %d\n", dado);
	
	dado--;
	printf("foi decrementado 1: %d\n", dado);
	
	dado += 3;
	printf("Foi incrementado 3: %d\n", dado);
	
	dado -= 2;
	printf("Foi decrementado 2: %d\n", dado);
	
	dado *= 10;
	printf("Foi multiplicado por 10: %d\n", dado);
	
	dado /= 10;
	printf("Foi divido por 10: %d\n", dado);
}
