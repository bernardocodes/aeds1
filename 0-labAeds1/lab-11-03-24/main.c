#include <stdio.h>
#include <stdlib.h>

int main() {
    int lado, linha, coluna, diagonal;
    char quadrado;

    printf("Tamanho do lado:");
    scanf("%d", &lado);
    getchar(); // Para consumir a quebra de linha deixada pelo scanf anterior

    printf("Escolha sua figura:");
    scanf("%c", &quadrado);
    getchar(); // Para consumir a quebra de linha deixada pelo scanf anterior

    switch (quadrado) {
        case 'c': // quadrado preenchido
            for (linha = 0; linha < lado; linha++) {
                for (coluna = 0; coluna < lado; coluna++) {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 'b': // somente bordas
            for (linha = 0; linha < lado; linha++) {
                for (coluna = 0; coluna < lado; coluna++) {
                    if (coluna == 0 || coluna == lado - 1 || linha == 0 || linha == lado - 1) {
                        printf("*");
                    } else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            break;

        case 'p': // borda e diagonal principal
            for (linha = 0; linha < lado; linha++) {
                for (coluna = 0; coluna < lado; coluna++) {
                    if (linha == 0 || coluna == 0 || coluna == lado - 1 || linha == lado - 1 || linha == coluna) {
                        printf("*");
                    } else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            break;

        case 's': // borda e diagonal secundaria
            for (linha = 0; linha < lado; linha++) {
                for (coluna = 0; coluna < lado; coluna++) {
                    if (coluna == 0 || coluna == lado - 1 || linha == 0 || linha == lado - 1 || linha + coluna == lado - 1) {
                        printf("*");
                    } else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            break;

        case 'h': // bordas e divisao horizontal
            for (linha = 0; linha < lado; linha++) {
                for (coluna = 0; coluna < lado; coluna++) {
                    if (coluna == 0 || coluna == lado - 1 || linha == 0 || linha == lado - 1 || linha == lado / 2) {
                        printf("*");
                    } else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            break;

        case 'v': // bordas e divisao vertical
            for (linha = 0; linha < lado; linha++) {
                for (coluna = 0; coluna < lado; coluna++) {
                    if (coluna == 0 || coluna == lado - 1 || linha == 0 || linha == lado - 1 || coluna == lado / 2) {
                        printf("*");
                    } else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            break;

        default:
            printf("opc desconhecida!");
    }

    return 0;
}
