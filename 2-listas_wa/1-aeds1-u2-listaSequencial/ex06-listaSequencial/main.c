/*6. Faça um algoritmo que receba 2 números inteiros x e y e calcule o resto da divisão x / y.*/

#include <stdio.h>

int main()
{
    int resto,x,y;//memória

    puts("\ndigite x: ");//entrada
    scanf("%d",&x);
    puts("\ndigite y: ");
    scanf("%d",&y);

    resto = x % y;//pros

    printf("\n\no resto da divisao de %d por %d = %d",x,y,resto);//saída

    return 0;
}
