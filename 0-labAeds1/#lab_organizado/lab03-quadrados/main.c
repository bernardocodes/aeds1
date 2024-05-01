#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z;
    char tipo;

    int linha=0;
    int coluna=0;

    int meio;

    scanf("%d%*c",&z);
    scanf("%c%*c",&tipo);

    switch(tipo){
    case 'c':
        for(int i=0;i<z;i++){//IMPRIMIR O QUADRADO COMPLETAMENTE PREENCHIDO
            for(int j=0;j<z;j++){
                printf("*");
            }
            printf("\n");//saltar para a prox linha
        }
        break;
    case 'b':
        for(int i=0;i<z;i++){//imprimir somente bordas
            for(int j=0;j<z;j++){

                if(i==0||i==z-1){//imprime bordas superior/imferior
                    printf("*");
                }else if(j==0||j==z-1){//imprime bordas laterais
                    printf("*");
                }else{
                    printf(" ");//preecher o interior
                }

            }
            printf("\n");//saltar para a prox linha
        }
        break;
    case 'p':
        for(int i=0;i<z;i++){//BORDAS + DIAGONAL PRINCIPAL
            for(int j=0;j<z;j++){

                if(i==0||i==z-1){//imprime bordas superior/imferior
                    printf("*");
                }else if(j==0||j==z-1){//imprime bordas laterais
                    printf("*");
                }else if(i==j){//diagonal principal (0,0 - 1,1 - 2,2 ...)
                    printf("*");
                }else{
                    printf(" ");//preecher o interior
                }

            }
            printf("\n");//saltar para a prox linha
        }
        break;
    case 's':
        for(int i=0;i<z;i++){//BORDAS + DIAGONAL SECUNDÁRIA
            for(int j=0;j<z;j++){

                if(i==0||i==z-1){//imprime bordas superior/imferior
                    printf("*");
                }else if(j==0||j==z-1){//imprime bordas laterais
                    printf("*");
                }else if(i+j==z-1){//diagonal secundaria (soma dos indices==tamanho-1
                    printf("*");
                }else{
                    printf(" ");//preecher o interior
                }

            }
            printf("\n");//saltar para a prox linha
        }
        break;
    case 'h':
        meio=z/2;
        for(int i=0;i<z;i++){//BORDAS + DIVISÃO HORIZONTAL NO MEIO
            for(int j=0;j<z;j++){

                if(i==0||i==z-1){//imprime bordas superior/imferior
                    printf("*");
                }else if(j==0||j==z-1){//imprime bordas laterais
                    printf("*");
                }else if(i==meio){//faixa horizontal do meio
                    printf("*");
                }else{
                    printf(" ");//preecher o interior
                }

            }
            printf("\n");//saltar para a prox linha
        }
        break;
    case 'v':
        meio=z/2;
        for(int i=0;i<z;i++){//BORDAS + DIVISÃO VERTICAL NO MEIO
            for(int j=0;j<z;j++){

                if(i==0||i==z-1){//imprime bordas superior/imferior
                    printf("*");
                }else if(j==0||j==z-1){//imprime bordas laterais
                    printf("*");
                }else if(j==meio){//faixa vertical do meio
                    printf("*");
                }else{
                    printf(" ");//preecher o interior
                }

            }
            printf("\n");//saltar para a prox linha
        }
        break;
    default:
        printf("Nao existe essa opcao\n");//erro

    }

    return 0;
}
