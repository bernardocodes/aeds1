//corrigido

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //memória
    int l;
    char c;
    int cont;
    int aux;

    //entrada
    printf("dig num inteiro: \n");
    scanf("%d%*c",&l);
    printf("dig caractere: \n");
    scanf("%c%*c",&c);

    switch(c){

        case 'c'://quadrado preenchido

            for(int lin=0;lin<l;lin++){
                for(int i=0;i<l;i++){
                    printf("*");
                }//fim for
                printf("\n");
            }//fim for

            break;//fim case c

        case 'b'://somente bordas

            for(int lin=0;lin<l;lin++){
                printf("*");
                for(int i=0;i<l-2;i++){
                    if(lin==0){
                        printf("*");
                    }else if(lin==l-1){
                        printf("*");
                    }else{
                        printf(" ");
                    }//fim else
                }//fim for
                printf("*\n");
            }//fim for

            break;//fim b

        case 'p'://diagonal principal
            aux = l-2;
            for(int lin=0;lin<l;lin++){
                printf("*");
                aux = aux - 1;
                for(int i=0;i<l-2;i++){
                    if(lin==0||lin==l-1){
                        printf("*");
                    }else if(i==aux){
                        printf("*");
                    }else{
                        printf(" ");
                    }//fim else
                }//fim for
                printf("*\n");
            }//fim for

            break;//fim p

        case 's'://diagonal secundária
            aux = 0;
            for(int lin=0;lin<l;lin++){
                printf("*");
                aux = aux + 1;
                for(int i=0;i<l-2;i++){
                    if(lin==0||lin==l-1){
                        printf("*");
                    }else if(i==aux){
                        printf("*");
                    }else{
                        printf(" ");
                    }//fim else
                }//fim for
                printf("*\n");
            }//fim for

            break;

        case 'h':
            break;

        case 'v':
            break;

        default:
            printf("opc invalida!");
    }

    return 0;
}
