/*14. Escreva o programa em C que correspondente ao fluxograma abaixo. (...)*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //mem
    int n1,n2;

    //entrada
    printf("\ndig n1: ");
    scanf("%d",&n1);
    printf("\ndig n2: ");
    scanf("%d",&n2);

    //pros
    if(n1>n2){
        n2 = n1 + 10;
        n1 = n1 - 10;
        printf("\nvalores atualizados: n1 = %d / n2 = %d",n1,n2);
    }else{
        printf("\n%d e menor que %d",n1,n2);
    }

    return 0;
}
