/*Exerc�cio 19: revisado 1x

Crie um programa em C que:
a) Receba 2 n�meros inteiros e imprima o resto da divis�o do primeiro n�mero pelo segundo.
b) Receba um intervalo num�rico inteiro e imprima os n�meros inteiros contidos no intervalo.
c) Receba 2 n�meros dupla precis�o e imprima o resultado da potencia��o do primeiro numero
(base) pelo segundo (expoente).
d) Receba um n�mero dupla precis�o e imprima sua raiz quadrada.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char letra;//mem�ria

    int n1,n2,aux;//a
    int resto;

    float N1,N2;
    float pot;//c
    float raiz;//d

    printf("dig letra: \n");//entrada letra da quest�o
    scanf("%c%*c",&letra);

    switch(letra){

    case 'a':

        printf("dig n1: \n");//entrada a
        scanf("%d%*c",&n1);
        printf("dig n2: \n");
        scanf("%d%*c",&n2);

        resto=n1%n2;//pros a

        printf("%d",resto);//sa�da a

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
            printf("%d\n",n2+i);//sa�da do b
        }//fim for

        break;

    case 'c':

        printf("dig n1: \n");//entrada c
        scanf("%f%*c",&N1);
        printf("dig n2: \n");
        scanf("%f%*c",&N2);

        pot=pow(N1,N2);//n1^n2

        printf("%.2f",pot);//sa�da c

        break;

    case 'd':

        scanf("%f%*c",&N1);//entrada d

        raiz=sqrt(N1);//raiz de n1

        printf("%.2f",raiz);//sa�da d

        break;

    default:
        printf("letra invalida!\n");

    }

    return 0;
}
