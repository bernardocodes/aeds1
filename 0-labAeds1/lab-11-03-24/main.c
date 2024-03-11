//corrigido

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //memória
    int l;
    char c;
    int cont;
    int aux = l-2;

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
                }
                printf("\n");
            }

            break;

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
                    }

                }
                printf("*\n");
            }
            break;

        case 'p':


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
                    }
                }
                printf("*\n");
            }

            break;

        case 'e':
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
