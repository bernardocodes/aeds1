#include<math.h>
#include <stdio.h>

int main()
{
    int soma, num1, num2;//mem�ria
    int raiz, num3, opc;

    printf("\n\nmenu de opcoes: ");//menu
    printf("\n1_somar dois num: ");
    printf("\n2_raiz quadrada de um num: ");

    printf("\n\ndigite opcao desejada: ");//entrada opc
    scanf("%d",&opc);

    if(opc==1){

        puts("\ndig n1: ");//entrada opc1
        scanf("%d",&num1);

        puts("dig n2: ");//entrada opc1
        scanf("%d",&num2);

        soma = num1 + num2;//pros

        printf("\nsoma = %d",soma);//sa�da
    }else if(opc==2){

        puts("\ndig n: ");//entrada opc2
        scanf("%d",&num3);

        raiz = sqrt(num3);//pros

        printf("\na raiz de n = %d",raiz);//sa�da
    }else{
        printf("\nopc invalida!");//sa�da alterna
    }

    return 0;
}
