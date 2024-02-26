//ESSE CÓDIGO NÃO ESTÁ FUNCIONANDO COMO DEVERIA E AGUARDA ALTERAÇÃO!

/*11.
Faça um programa que, dados os três lados x, y e z de um triângulo, verifique correspondem aos lados de um triângulo válido.
Caso o triângulo seja válido, imprima se o triângulo é equilátero, isósceles ou escaleno.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //mem
    float x,y,z;
    int lado = 0;
    int l_iguais = 0;//qtd

    //entrada
    printf("\ndig x: ");
    scanf("%f",&x);
    printf("\ndig y: ");
    scanf("%f",&y);
    printf("\ndig z: ");
    scanf("%f",&z);

    /*

    --> o código abaixo está errado porque testa cada uma individualmente, o que não é correto,
    uma vez que vc precisa que todas sejam verdadeiras ao mesmo tempo

    //pros - teste validade: condição = |b-c| < a < b+c
    if(fabs(x-y)<z&&z<x+y){
        lado++;
        printf("\n%f valido!",x);
    }else if(fabs(y-z)<x&&x<y+z){
        lado++;
        printf("\n%f valido!",y);
    }else if(fabs(z-x)<y&&y<z+x){
        lado++;
        printf("\n%f valido!",z);
    }//f else

    */

    //pros - teste validade:
    if(x <= 0 || y <= 0 || z <= 0 ||x >= y + z || y >= x + z || z >= x + y ||x >= fabs(y - z) || y >= fabs(x - z) || z >= fabs(x - y)){
        printf("\ntriangulo invalido!");
        exit(0);
    }else{
        printf("\ntriangulo valido!");
    }

    //pros - testar tipo (isóceles, equilátero, escaleno)
    if(x==y){
        l_iguais++;
    }
    if(y==z){
        l_iguais++;
    }if(z==x){
        l_iguais++;
    }//f if

    //saída:
    if(l_iguais==0){
        printf("\nescalento!");//s
    }else if(l_iguais==2){
        printf("\nisoceles!");//s
    }else if(l_iguais==3){
        printf("\nequilatero!");//s
    }

    return 0;
}
