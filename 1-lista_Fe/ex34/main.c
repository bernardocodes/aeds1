/*
Exercício 34
Analise atentamente o código em C a seguir:
#include <stdio.h>
int main(){
int opcao = 0;
scanf("%d", &opcao);
switch (opcao) {
case 1:
printf("\nvoce digitou 1 e escolheu a primeira opcao.\n");
break;
case 2:
printf("\nvoce digitou 2 e escolheu a segunda opcao.\n");
break;
case 7:
printf("\nvoce digitou 7 e escolheu a terceira opcao.\n");
break;
default:
printf("\nopcao invalida\n");
}
return 0;
}
Analise o código, descreva brevemente seu funcionamento e responda qual a saída quando a
entrada for: a) 7; b) 8; c) 10.
*/

/*
respostas:

a)7-a terceira opção é executada!
b)8-default é executado (opc inválica)
c)10-default é executado (opc inválica)
*/
