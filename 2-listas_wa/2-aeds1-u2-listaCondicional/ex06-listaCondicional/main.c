/*6.
Faça um programa que receba três notas de 0 a 10 de um aluno,
calcule e mostre a nota final do aluno, dada pela média aritmética,
e a situação do aluno conforme a tabela.*/

#include <stdio.h>

int main()
{
    //memoria
    int situacao;
    float nota1,nota2,nota3;
    float media;

    //entrada
    printf("\ndig nota1: ");
    scanf("%f",&nota1);
    printf("\ndig nota2: ");
    scanf("%f",&nota2);
    printf("\ndig nota3: ");
    scanf("%f",&nota3);

    //pros
    media=(nota1+nota2+nota3)/3;

    printf("\n\nnota final: %.2f",media);
    if(media>=6){
        printf("\nAPROVADO!");//saída
    }else{
        printf("\nREPROVADO!");//saída
    }//fim else

    return 0;
}
