/*
ENUNCIADO: Você terá de criar um programa que leia uma matriz 9x9 de números de 1 a 9 e,
em seguida, realizar a operação desejada pelo usuário até que o valor 0,
indicando a finalização do programa, seja apresentado.

As opções referentes à funcionalidade do programa são:

1. Atualizar índice: Juntamente com a opção 1, na mesma linha,
serão apresentadas o índice da linha (entre 0 a 8),
o índice da coluna (0 a 8), e o novo algarismo (1 a 9)
que irá substituir o algarismo antigo na posição indicada.

2. Verificar linha: Juntamente com a opção 2,
na mesma linha, será apresentada o índice da linha (entre 0 a 8) a ser verificada.
Se não houver repetição de números, deve-se imprimir o caractere 'N'; caso contrário, imprima 'S'.

3. Verificar coluna: Juntamente com a opção 3, na mesma linha,
será apresentada o índice da coluna (entre 0 a 8) a ser verificada.
Se não houver repetição de números, deve-se imprimir o caractere 'N'; caso contrário, imprima 'S'.

4. Verificar quadrante: Juntamente com a opção 4,
na mesma linha, será apresentada o índice do quadrante (0 a 8) a ser verificado.
Se não houver repetição de números, deve-se imprimir o caractere 'N';
caso contrário, imprima 'S'. Os quadrantes estão enumerados na seguinte forma:

0 1 2
3 4 5
6 7 8

5. Verificar matriz: Se não houver repetição de números, deve-se imprimir o caractere 'N';
caso contrário, imprima 'S'

Qualquer outro valor que não esteja no intervalo [0,5],
assume-se que o usuário deseja imprimir a matriz de maneira formatada,
deixando claro a separação dos quadrantes via espaços e linhas em branco.

RESTRIÇÕES: Não se pode utilizar nenhum conceito (ainda) não visto em sala de aula (so usar até matriz)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //memória
    int mat[9][9];
    int linha, coluna, novo_algarismo;

    //leitura da matriz
    for(int i=0;i<9;i++){//<9 pq ini=0 e são 9 posições
        for(int c=0;c<9;c++){
            scanf("%d%*c",mat[i][c]);
        }
    }

    int opc=1;//para conseguir entrar no while
    while(opc!=0){

        //1
        scanf("%d%*c",&linha);
        scanf("%d%*c",&coluna);
        scanf("%d%*c",&novo_algarismo);

        for(int i=0;i<linha;i++){//<9 pq ini=0 e são 9 posições
            for(int c=0;coluna<9;c++){
                if(i==(linha-1)&&c==(coluna-1)){//se estiver na posição correta,
                    scanf("%d%*c",mat[i][c]=novo_algarismo);
                }
            }
        }
        //2

    }

    return 0;
}
