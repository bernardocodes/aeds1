#include <stdio.h>
#include <stdlib.h>

struct aluno{//aluno genérico
        char nome[50];
//E SE EU QUISER USAR ALOCAÇÃO DINÂMICA PARA DEFINIR O TAMANHO DE CADA NOME INDIVIDUALMENTE???
};

int main()
{
    struct aluno sala[5][3];//array do novo tipo (sala)
    //observe que a j representa o num de salas (considerando que tem a mesma qtd de alunos)

    for(int j=0;j<3;j++){//percorrer as 3 salas
        for(int i=0;i<5;i++){//pede os nomes dos alunos
            printf("dig nome aluno %d (da sala %d):\n",i,j);
            scanf("%s",sala[i][j].nome);
        }
    }

    printf("\n");
    printf("segue os nomes dos alunos das 3 salas: \n");

    for(int j=0;j<3;j++){//imprime os nomes separados por sala
        for(int i=0;i<5;i++){
            printf("%d: %s\n",i+1,sala[i][j].nome);
        }
        printf("\n");
    }

    return 0;
}
