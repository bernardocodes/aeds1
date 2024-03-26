/*
Exercício 9
Crie um programa em Portugol ou C que calcule e imprima o resultado de:

a) Π5
i=0
regra=i/i+1

b) Π7
i=1
regra=i

c) Σ17
i=4
regra=i + 1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i=0;
    char letra;
    printf("digite a letra do ex: \n");
    scanf("%c%*c",&letra);

    switch(letra){
    case 'a':
        /*
        x=0;
        i=0;
        x=i/(i*1);//parece que vai cair em uma indeterminação 0/0
        //printf("%d",x);
        i++;
        x=(i/(i*1))*x;
        i++;
        x=(i/(i*1))*x;
        i++;
        x=(i/(i*1))*x;
        i++;
        x=(i/(i*1))*x;
        i++;
        x=(i/(i*1))*x;
        printf("%d",x);
        */
        printf("resp n pertence aos reais! (0/0)");
        break;
    case 'b':
        x=0;
        i=1;
        x=i*(i+1)*(i+2)*(i+3)*(i+4)*(i+5)*(i+6)*(i+7);
        printf("%d",x);
        break;
    case 'c':
        x=0,i=4;
        x=i*(i+1)+(i+2)+(i+3)+(i+4)+(i+5)+(i+6)+(i+7)+(i+8)+(i+9)+(i+10)+(i+11)+(i+12)+(i+13);
        printf("%d",x);
        break;
    default:
        printf("essa letra nao pertence ao ex 9!");
        break;
    }

    return 0;
}
