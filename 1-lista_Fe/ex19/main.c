/*Exercício 19: revisado 1x

Crie um programa em C que:
a) Receba 2 números inteiros e imprima o resto da divisão do primeiro número pelo segundo.
b) Receba um intervalo numérico inteiro e imprima os números inteiros contidos no intervalo.
c) Receba 2 números dupla precisão e imprima o resultado da potenciação do primeiro numero
(base) pelo segundo (expoente).
d) Receba um número dupla precisão e imprima sua raiz quadrada.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char letra;//memória

    int n1,n2,aux;//a
    int resto;

    float N1,N2;
    float pot;//c
    float raiz;//d

    printf("dig letra: \n");//entrada letra da questão
    scanf("%c%*c",&letra);

    switch(letra){

    case 'a':

        printf("dig n1: \n");//entrada a
        scanf("%d%*c",&n1);
        printf("dig n2: \n");
        scanf("%d%*c",&n2);

        resto=n1%n2;//pros a

        printf("%d",resto);//saída a

        break;

    case 'b':

        printf("dig n1: \n");//entrada b
        scanf("%d%*c",&n1);
        printf("dig n2: \n");
        scanf("%d%*c",&n2);

        if(n2<n1){//reorg ordem - caso esteja fora de ordem (maior para menor)
            aux=n1;
            n1=n2;
            n2=aux;
        }//fim if

        aux=n1-n2;//definindo max de num

        for(int i=0;i<aux;i++){//percorrer e imprimir cada num do intervalo
            printf("%d\n",n2+i);//saída do b
        }//fim for

        break;

    case 'c':

        printf("dig n1: \n");//entrada c
        scanf("%f%*c",&N1);
        printf("dig n2: \n");
        scanf("%f%*c",&N2);

        pot=pow(N1,N2);//n1^n2

        printf("%.2f",pot);//saída c

        break;

    case 'd':

        scanf("%f%*c",&N1);//entrada d

        raiz=sqrt(N1);//raiz de n1

        printf("%.2f",raiz);//saída d

        break;

    default:
        printf("letra invalida!\n");

    }

    return 0;
}
