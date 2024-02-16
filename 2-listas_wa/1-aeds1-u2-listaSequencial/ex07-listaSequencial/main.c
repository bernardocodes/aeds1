/*7. Faça um algoritmo que leia os lados de um retângulo e calcule sua área e seu perímetro.*/

#include <stdio.h>

int main()
{
    float a,p,L,l;//memória

    puts("\ndig L: ");//entrada
    scanf("%f",&L);
    puts("\ndig l: ");
    scanf("%f",&l);

    a = L * l;//pros
    p = L + L + l + l;

    printf("\n\np = %.2f",p);//saída
    printf("\n\np = %.2f",a);
    return 0;
}
