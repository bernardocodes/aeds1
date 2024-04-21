/*
ENUNCIADO: Voc� ter� de criar um programa que leia uma matriz 9x9 de n�meros de 1 a 9 e,
em seguida, realizar a opera��o desejada pelo usu�rio at� que o valor 0,
indicando a finaliza��o do programa, seja apresentado.

As op��es referentes � funcionalidade do programa s�o:

1. Atualizar �ndice: Juntamente com a op��o 1, na mesma linha,
ser�o apresentadas o �ndice da linha (entre 0 a 8),
o �ndice da coluna (0 a 8), e o novo algarismo (1 a 9)
que ir� substituir o algarismo antigo na posi��o indicada.

2. Verificar linha: Juntamente com a op��o 2,
na mesma linha, ser� apresentada o �ndice da linha (entre 0 a 8) a ser verificada.
Se n�o houver repeti��o de n�meros, deve-se imprimir o caractere 'N'; caso contr�rio, imprima 'S'.

3. Verificar coluna: Juntamente com a op��o 3, na mesma linha,
ser� apresentada o �ndice da coluna (entre 0 a 8) a ser verificada.
Se n�o houver repeti��o de n�meros, deve-se imprimir o caractere 'N'; caso contr�rio, imprima 'S'.

4. Verificar quadrante: Juntamente com a op��o 4,
na mesma linha, ser� apresentada o �ndice do quadrante (0 a 8) a ser verificado.
Se n�o houver repeti��o de n�meros, deve-se imprimir o caractere 'N';
caso contr�rio, imprima 'S'. Os quadrantes est�o enumerados na seguinte forma:

0 1 2
3 4 5
6 7 8

5. Verificar matriz: Se n�o houver repeti��o de n�meros, deve-se imprimir o caractere 'N';
caso contr�rio, imprima 'S'

Qualquer outro valor que n�o esteja no intervalo [0,5],
assume-se que o usu�rio deseja imprimir a matriz de maneira formatada,
deixando claro a separa��o dos quadrantes via espa�os e linhas em branco.

RESTRI��ES: N�o se pode utilizar nenhum conceito (ainda) n�o visto em sala de aula (so usar at� matriz)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //mem�ria
    int mat[9][9];
    int linha, coluna, novo_algarismo;

    //leitura da matriz
    for(int i=0;i<9;i++){//<9 pq ini=0 e s�o 9 posi��es
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

        for(int i=0;i<linha;i++){//<9 pq ini=0 e s�o 9 posi��es
            for(int c=0;coluna<9;c++){
                if(i==(linha-1)&&c==(coluna-1)){//se estiver na posi��o correta,
                    scanf("%d%*c",mat[i][c]=novo_algarismo);
                }
            }
        }
        //2

    }

    return 0;
}
