#include <stdio.h>
int main(){
	int num, soma, cubo;
	scanf("%d%*c", &num);
	soma = 0; // Acumulador de primos
	for(int i = num - 1; i >= 2; --i){ // Nums < que o lido
		int div = i - 1; // Todo num e div por ele mesmo
		// Verificar se o numero e primo
		while(i > 1 && i % div != 0) { div --; }
		if(div == 1) { soma += i; } // Se o unico div é 1, então é primo
	}
	cubo = soma*soma*soma; // Cubo da soma dos primos
	printf("%d\n", cubo);

	return 0;
}
