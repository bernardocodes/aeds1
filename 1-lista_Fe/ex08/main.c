/*Exerc�cio 8

Uma loja de brinquedos vende bolas compostas de duas cores dentre branco, amarelo e azul. Crie
um programa em Portugol ou C que receba, atrav�s da entrada de usu�rio, as cores que comp�em
uma bola e imprima �true� caso essa bola tenha as cores azul e branco. Caso contr�rio, imprima
"false".*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1,c2;//mem - cor1 e cor2
    scanf("%c%*c",&c1);//entrada
    scanf("%c%*c",&c2);
    if(c1=='z'||c1=='b'){//testa se tem uma das cores
        if(c2=='z'||c2=='b'){//testa se tem uma das cores
            if(c1!=c2){//testa se a bola tem cores diferentes
                printf("%d",1);//verdadeiro se a bola � branca e azul
            }else{
                printf("%d",0);//falso
            }
        }else{
            printf("%d",0);//falso
        }
    }else{
        printf("%d",0);//falso
    }
    return 0;
}
