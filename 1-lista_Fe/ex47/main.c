/*Exercício 47
Elabore um programa em C que inicialize uma variável inteira com o valor 0 para, então, incrementar
seu valor de 5 em 5, até que passe a valer 100. Para isso, utilize a estrutura de repetição:
a) f or; b) while; c) do while.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var=0;//variável enunciado

    char letra;//letra do ex
    scanf("%c%*c",&letra);

    switch(letra){
        case 'a':
            printf("%d\n",var);//imprime a primeira vez, antes de atualizar o valor
            for(int i=0;i<100;i+=5){
                var+=5;
                printf("%d\n",var);
            }
            break;
        case 'b':
            printf("%d\n",var);//imprime a primeira vez, antes de atualizar o valor
            while(var<100){
                var+=5;
                printf("%d\n",var);
            }
            break;
        case 'c':
            printf("%d\n",var);//imprime a primeira vez, antes de atualizar o valor
            do{
                var+=5;
                printf("%d\n",var);
            }while(var<100);
            break;
    }
    return 0;
}
