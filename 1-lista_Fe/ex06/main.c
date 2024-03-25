/*
A notação matemática é uma forma de linguagem universal que pode ser reconhecida independente
da região. Nela, existem Somatórios e Produtórios, que são formas recursivas de somar e multiplicar
números gradualmente.
O somatório ao lado utiliza a Notação Sigma. Nele,
o índice “i” começa em 0 e é somado à “i + 1” até
que o valor de “i” seja igual a N (nesse exemplo:
10). Na programação, o resultado do somatório é
armazenado em uma variável inicializada em 0
(nesse exemplo: X).
X = 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10
Crie um programa em Portugol ou C que calcule e imprima o resultado de:
a) Σ10
i=1 i
b) Σ10
i=0 i + 1
c) Π15
i=0 i
d) Π10
i=1 i
e) Em (d) a fórmula representa qual operação/função matemática?
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    char letra;
    printf("dig letra do ex (a-d): \n");
    scanf("%c%*c",&letra);

    switch(letra){
    case 'a':
        x=0;
        i=1;
        x= i+(i+1)+(i+2)+(i+3)+(i+4)+(i+5)+(i+6)+(i+7)+(i+8)+(i+9)+(i+10);
        printf("%d",x);
        break;
    case 'b':
        x=0;
        i=0;
        x=i+(i+1)+(i+2)+(i+3)+(i+4)+(i+5)+(i+6)+(i+7)+(i+8)+(i+9);
        printf("%d",x);
        break;
    case 'c':
        i=0;
        x=i;
        printf("%d",x);
        break;
    case 'd':
        i=1;
        x=0;
        x=1*2*3*4*5*6*7*8*9*10;
        printf("%d",x);
        break;
    default:
        printf("essa letra NAO pertence ao ex!");
        exit(0);
    }
    return 0;
}
