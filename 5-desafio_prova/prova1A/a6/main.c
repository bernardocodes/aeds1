#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int aux;

    int divisor=0;
    int dividendo;
    int resto;
    int quociente;

    scanf("%d%*c",&n);

    aux=n;

    while(aux>=0){
        if((n-aux)%2==0){//2
            divisor++;
        }
        if((n-aux)%3==0){//3
            divisor++;
        }
        if((n-aux)%5==0){//5
            divisor++;
        }
        if(divisor==3){//divisivel pelos 3 simultaneamente
            printf("%d ",n-aux);
        }
        aux--;//pula para o prox num
        divisor=0;//atualiza para o prox loop
    }
    return 0;
}
