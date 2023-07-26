#include <stdio.h>

int main() {
//	int v[5] = {50, 40, 30, 20, 10};
//	
//	int i;
//	float m = 0;
//	for(i = 0; i <= 5; i++) {
//		m += v[i];
//		
//		if(i == 4) {
//			m /= i + 1;
//			printf("Resultado: %.2f\n", m);
//		}
//	}



	int v[5] = {10, 20, 30, 40, 50};
	
	int i;
	float s = 0;
	for(i = 0; i < 5; i++) {
		s += v[i];
	}
	
	printf("Resultado: %.2f\n", s/5);
}
