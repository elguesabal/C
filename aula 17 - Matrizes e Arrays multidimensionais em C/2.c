#include <stdio.h>
#include <string.h>

int main() {
	int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	printf("Imprimindo a primeira linha\n");
	
	int i, j;
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}
