/*Exerc�cio 24
O f gets() � uma fun��o da biblioteca C que nos permite receber uma linha de caracteres (incluindo
espa�os) e, ent�o, armazen�-la em uma vari�vel do tipo char com um vetor de n posi��es. Sua
sintaxe �: f gets (variavel, n, stdin); Em que �variavel� � o nome da vari�vel char que armazenar� o
texto, "n" � o n�mero m�ximo de caracteres a serem armazenados e "stdin" significa standard input
ou "entrada padr�o" , o que determina que os caracteres ser�o recebidos pela entrada do usu�rio.
A partir dessa informa��o, crie um programa em C utilizando a fun��o f gets para receber um
texto de at� 100 caracteres e imprimi-lo na tela.
(Nota: Declara��o de vari�vel char com vetor de n posi��es: char variavel[n];)
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
