/*10.
Uma escola de basquete distribui os jogadores em categorias conforme altura e idade.
Existem quatro categorias: infantil, júnior, profissional e sênior.
Os seguintes critérios são utilizados para categorizar os atletas:

					----------	categoria	---------

                infantil	junior		profissional	senior
idade(anos)		6 a 10    	11 a 17 	18 a 35			acima de 35
altura(metros)	>= 1,00   	>= 1,40  	>= 1,70			>= 1,60

Jogadores que não se enquadram nos critérios acima não estão aptos a participar dos times da escola.
Faça um algoritmo que leia a idade e a altura de um jogador e escreva a categoria à qual ele pertence.
Caso o jogador não se enquadre em nenhuma categoria da escola, escreva “Não apto”.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //mem
    int i;
    float h;

    //entrada
    printf("\ndig i: ");
    scanf("%d",&i);
    printf("\ndig h: ");
    scanf("%f",&h);

    //pros - saída
    if(i>=6&&i<=10){
        if(h>=1.00){
            printf("\ncat: infantil!");
        }//f if
    }else if(i>=11&&i<=17){
        if(h>=1.40){
            printf("\ncat:junior!");
        }//f if
    }else if(i>=18&&i<=35){
        if(h>=1.70){
            printf("\ncat:profissional!");
        }//f if
    }else if(i>35){
        if(h>=1.60){
            printf("\ncat:senior!");
        }//f if
    }else{
        printf("\nnao apto!");
    }//fim else

    return 0;
}
