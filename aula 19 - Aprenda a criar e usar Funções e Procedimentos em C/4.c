#include <stdio.h>
#include <locale.h>

float maior(float num1, float num2);

int main() {
	setlocale(LC_ALL, "Portuguese");

	float x, y;
	
	printf("Insira um n�mero:\n");
	scanf("%f", &x);
	fflush(stdin);
	
	printf("Insira outro n�mero:\n");
	scanf("%f", &y);
	fflush(stdin);
	
	printf("O maior n�mero informado �: %.2f", maior(x, y));
}

float maior(float num1, float num2) {
	if(num1 > num2) {
		return num1;
	} else {
		return num2;
	}
}
