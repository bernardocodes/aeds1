/**/

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
