//a b está imprimindo doi char a mais em cada linha

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //memória
    int l;
    char c;
    int cont;

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
                for(int i=0;i<l;i++){
                    if(lin==0){
                        printf("*");
                    }else if(lin==l-1){
                        printf("*");
                    }else{
                        printf(" ");
                    }//fim else
                }//fim for
                printf("*\n");
            }
            break;

        case 'p':

            for(int lin=0;lin<l;lin++){
                printf("*");
                for(int i=0;i<l;i++){
                    if(lin==0){
                        printf("*");
                    }else if(lin==l-1){
                        printf("*");
                    }else{
                        if(l-(lin+1)){//aqui
                            printf(" ");
                        }else{
                            printf("*");
                        }

                    }//fim else
                }//fim for
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
