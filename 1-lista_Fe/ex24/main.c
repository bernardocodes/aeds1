/*Exercício 24
O f gets() é uma função da biblioteca C que nos permite receber uma linha de caracteres (incluindo
espaços) e, então, armazená-la em uma variável do tipo char com um vetor de n posições. Sua
sintaxe é: f gets (variavel, n, stdin); Em que “variavel” é o nome da variável char que armazenará o
texto, "n" é o número máximo de caracteres a serem armazenados e "stdin" significa standard input
ou "entrada padrão" , o que determina que os caracteres serão recebidos pela entrada do usuário.
A partir dessa informação, crie um programa em C utilizando a função f gets para receber um
texto de até 100 caracteres e imprimi-lo na tela.
(Nota: Declaração de variável char com vetor de n posições: char variavel[n];)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[100];
    fgets(texto,100,stdin);
    printf("%s",texto);
    return 0;
}
