/*16.
Faça um algoritmo para calcular e mostrar os valores das funções ℎ, 𝑓 e ℎ abaixo no ponto 𝑥 fornecido pelo usuário.

ℎ(𝑥)=  𝑥^2−16

𝑓(𝑥)=  ℎ(𝑥), se ℎ(𝑥)≥01,
	 1, se ℎ(𝑥)<0

𝑔(𝑥)=  𝑥2+16, se 𝑥>5
        −𝑥/2, se 𝑥≤5*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //memória
    float x,y;
    float hx,fx,gx;

    //entrada
    printf("dig x: ");
    scanf("%f",&x);
    printf("dig y: ");
    scanf("%f",&y);

    //pros

    hx = (pow(x,2))-16;//hx

    if(hx>=0){//fx
        fx = hx;
    }else{
        fx = 1;
    }

    if(x>5){//gx
        gx = (pow(x,2)) + 16;
    }else if(x<=5){
        gx = (-1*x)/2;
    }

    //saída
    printf("h(%.2f) = %.2f\n",hx,hx);
    printf("f(%.2f) = %.2f\n",fx,fx);
    printf("g(%.2f) = %.2f\n",gx,gx);
    return 0;
}
