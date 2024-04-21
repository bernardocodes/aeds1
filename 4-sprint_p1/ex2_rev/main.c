#include <stdio.h>
#include <stdlib.h>


int main(){
	int num;
	scanf("%d%*c", &num);
	for(int i = -num/2; i <= num/2; ++i){ // centralizando pelo eixo X
		for(int j = -num/2; j <= num/2; ++j) { // centralizando pelo eixo Y
			if(i*i + j*j <= (num/2)*(num/2)){ // x^2 + y^2 <= r^2?
				printf("*"); // Então é um ponto dentro do círculo
			} else {
				printf(" "); // Tá fora do círculo
			}
		}
		printf("\n");
	}

	return 0;
}
