/*
Exercício 3

João, um aluno de ensino médio, precisa tirar 10 pontos na sua prova final para poder passar na
etapa. Crie um programa, em Portugol e em C, que receba do usuário a nota de João e, caso seja
menor do que 10, imprima "reprovado". Caso seja igual ou maior que 10, imprima "aprovado".
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;//mem
    scanf("%f%*c",&nota);//entrada
    if(nota<10){
        printf("reprovado!\n");
    }else{
        printf("aprovado!\n");
    }//fim-else
    return 0;
}
