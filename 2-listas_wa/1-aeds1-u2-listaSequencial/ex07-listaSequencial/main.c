/*7. Fa�a um algoritmo que leia os lados de um ret�ngulo e calcule sua �rea e seu per�metro.*/

#include <stdio.h>

int main()
{
    float a,p,L,l;//mem�ria

    puts("\ndig L: ");//entrada
    scanf("%f",&L);
    puts("\ndig l: ");
    scanf("%f",&l);

    a = L * l;//pros
    p = L + L + l + l;

    printf("\n\np = %.2f",p);//sa�da
    printf("\n\np = %.2f",a);
    return 0;
}
