/*2. Crie um algoritmo que calcule a m�dia aritm�tica de 3 n�meros fornecidos pelo usu�rio.*/

#include <stdio.h>

int main()
{
    float media;//mem�ria
    int num1, num2, num3;

    puts("digite num1: ");//entrada
    scanf("%d",&num1);
    puts("digite num2: ");
    scanf("%d",&num2);
    puts("digite num3: ");
    scanf("%d",&num3);

    media = num1 + num2 + num3;//pros
    media = media/3;

    printf("a media dos numeros digitados vale: %f",media);

    return 0;
}
