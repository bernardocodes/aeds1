#include <stdio.h>
#include <stdlib.h>


int main(){
	int num;
	scanf("%d%*c", &num);
	for(int i = -num/2; i <= num/2; ++i){ // centralizando pelo eixo X
		for(int j = -num/2; j <= num/2; ++j) { // centralizando pelo eixo Y
			if(i*i + j*j <= (num/2)*(num/2)){ // x^2 + y^2 <= r^2?
				printf("*"); // Ent�o � um ponto dentro do c�rculo
			} else {
				printf(" "); // T� fora do c�rculo
			}
		}
		printf("\n");
	}

	return 0;
}
