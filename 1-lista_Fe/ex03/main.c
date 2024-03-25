#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;//mem
    scanf("%f%*c",&nota);//entrada
    if(nota<10){
        printf("reprovado!\n");
    }else{
        printf("aprovado!\n");
    }//fim-else
    return 0;
}
