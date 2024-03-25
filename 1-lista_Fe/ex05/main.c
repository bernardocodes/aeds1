/*
Exercício 5
Escreva um programa em Portugol e em C que receba dois números através da entrada do usuário
e imprima: a) o maior deles; b) seu produto; c) a média aritmética; e d) a soma do antecessor do
primeiro com o sucessor do segundo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,maior,produto;//mem
    float media;

    scanf("%d%*c",&n1);//entrada
    scanf("%d%*c",&n2);

    if(n1>=n2){//maior
        maior=n1;
    }else{
        maior=n2;
    }//fim-else

    produto=n1*n2;//produto

    media=(n1+n2)/2;//media

    printf("maior: %d\n",maior);//saída
    printf("produto: %d\n",produto);
    printf("media: %f\n",media);
    printf("ant n1 + suc n2 : %d\n",(n1-1)+(n2+1));

    return 0;
}
