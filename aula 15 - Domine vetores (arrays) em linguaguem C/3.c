#include <stdio.h>

int main() {
	int v[5];
	
	int i;
	for(i = 0; i < 5; i++) {
		printf("Insira um dado:\n");
		scanf("%d", &v[i]);
	}
	
	printf("Dados informados:\n");
	for(i = 0; i < 5; i++) {
		printf("%d\n", v[i]);
	}
}
