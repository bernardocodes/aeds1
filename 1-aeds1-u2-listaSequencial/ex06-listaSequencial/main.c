/*6. Fa�a um algoritmo que receba 2 n�meros inteiros x e y e calcule o resto da divis�o x / y.*/

#include <stdio.h>

int main()
{
    int resto,x,y;//mem�ria

    puts("\ndigite x: ");//entrada
    scanf("%d",&x);
    puts("\ndigite y: ");
    scanf("%d",&y);

    resto = x % y;//pros

    printf("\n\no resto da divisao de %d por %d = %d",x,y,resto);//sa�da

    return 0;
}
