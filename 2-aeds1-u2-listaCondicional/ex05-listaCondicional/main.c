/*5.
Fa�a um programa que mostre o menu de op��es a seguir, receba a op��o do usu�rio e os dados necess�rios para executar cada opera��o.
Menu de op��es:
1.
Somar dois n�meros.
2.
Raiz quadrada de um n�mero.
Digite a op��o desejada:*/

#include<math.h>

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
