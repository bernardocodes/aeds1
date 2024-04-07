/*
ENUNCIADO: Você deve fazer um programa que leia do(a) usuário(a) uma sequência de 10 números que serão passados por ele(a) e, em seguida, oferecer as seguintes opções:
0. Sair do programa
1. Atualizar o valor em um índice específico (fornecido pelo(a) usuário(a)) da sequência
2. Exibir sequência
3. Exibir sequência em ordem reversa
4. Exibir a somatória de todos os valores da sequência
5. Exibir a contagem de números duplicados da sequência
6. Exibir os valores únicos (i.e., sem repetição) da sequência
7. Exibir a frequência de todos os valores da sequência
8. Exibir o valor máximo, mínimo e médio (com duas casas decimais) da sequência
9. Exibir o valor da mediana da sequência
10. Exibir a sequência em ordem crescente
11. Exibir a sequência em ordem decrescente
12. Exibir os valores pares e ímpares da sequência (sem repetição)
13. Exibir a sequência rotacionada M vezes (quantidade fornecida pelo(a) usuário(a)) para a esquerda
14. Exibir a sequência rotacionada M vezes (quantidade fornecida pelo(a) usuário(a)) para a direita

RESTRIÇÕES: Não se pode utilizar nenhum conceito não visto em sala de aula (por ex., cadeias de caracteres)
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
    printf("6. Exibir os valores unicos (i.e., sem repetição) da sequencia: \n");
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
