/*
ENUNCIADO: Voc� deve fazer um programa que leia do(a) usu�rio(a) uma sequ�ncia de 10 n�meros que ser�o passados por ele(a) e, em seguida, oferecer as seguintes op��es:
0. Sair do programa
1. Atualizar o valor em um �ndice espec�fico (fornecido pelo(a) usu�rio(a)) da sequ�ncia
2. Exibir sequ�ncia
3. Exibir sequ�ncia em ordem reversa
4. Exibir a somat�ria de todos os valores da sequ�ncia
5. Exibir a contagem de n�meros duplicados da sequ�ncia
6. Exibir os valores �nicos (i.e., sem repeti��o) da sequ�ncia
7. Exibir a frequ�ncia de todos os valores da sequ�ncia
8. Exibir o valor m�ximo, m�nimo e m�dio (com duas casas decimais) da sequ�ncia
9. Exibir o valor da mediana da sequ�ncia
10. Exibir a sequ�ncia em ordem crescente
11. Exibir a sequ�ncia em ordem decrescente
12. Exibir os valores pares e �mpares da sequ�ncia (sem repeti��o)
13. Exibir a sequ�ncia rotacionada M vezes (quantidade fornecida pelo(a) usu�rio(a)) para a esquerda
14. Exibir a sequ�ncia rotacionada M vezes (quantidade fornecida pelo(a) usu�rio(a)) para a direita

RESTRI��ES: N�o se pode utilizar nenhum conceito n�o visto em sala de aula (por ex., cadeias de caracteres)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc;
    int novo_num;
    int vet[10];
    int ind;

    for(int i=0;i<10;i++){//preencher a sequencia
        scanf("%d%*c",&vet[i]);
    }

    printf("menu: \n");
    printf("0. Sair do programa: \n");//ok
    printf("1. Atualizar o valor em um indice especifico (fornecido pelo(a) usuario(a)) da sequencia: \n");
    printf("2. Exibir sequencia: \n");
    printf("3. Exibir sequencia em ordem reversa: \n");
    printf("4. Exibir a somatoria de todos os valores da sequencia: \n");
    printf("5. Exibir a contagem de numeros duplicados da sequencia: \n");
    printf("6. Exibir os valores unicos (i.e., sem repeti��o) da sequencia: \n");
    printf("7. Exibir a frequencia de todos os valores da sequencia: \n");
    printf("8. Exibir o valor maximo, minimo e medio (com duas casas decimais) da sequencia: \n");
    printf("9. Exibir o valor da mediana da sequencia: \n");
    printf("10. Exibir a sequencia em ordem crescente: \n");
    printf("11. Exibir a sequencia em ordem decrescente: \n");
    printf("12. Exibir os valores pares e impares da sequencia (sem repeticao): \n");
    printf("13. Exibir a sequencia rotacionada M vezes (quantidade fornecida pelo(a) usuario(a)) para a esquerda: \n");
    printf("14. Exibir a sequencia rotacionada M vezes (quantidade fornecida pelo(a) usuario(a)) para a direita: \n");

    printf("\ndig opc: \n");
    scanf("%d%*c",&opc);

    while(opc!=0){
        switch(opc){
            case 1:
                printf("dig indice que deseja alterar: \n");
                scanf("%d%*c",&ind);
                printf("dig novo num: ");
                scanf("%d%*c",&novo_num);
                vet[ind]=novo_num;
            break;
        }
    }
    return 0;
}
