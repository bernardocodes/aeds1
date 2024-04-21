#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int aux;

    int qtd_div=0;//zero pq faremos uma contagem

    int divisor;//var calc do resto sem operador % (segundo a fórmula deduzida: resto == divisor - (quociente * dividendo)
    int resto;
    int quociente;
    int dividendo;

    scanf("%d%*c",&n);

    aux=n;//manipular n sem alterar o valor original

    while(aux>=0){

        divisor=n-aux;//cálculo do divisor
        resto=0;//zero pq faremos comparações quando as divisões derem resto zero

        //((n-aux)-(2*((n-aux)/2))==0

        dividendo=2;//divisor de 2?
        quociente=(n-aux)/2;
        if((divisor-(dividendo*quociente))==resto){//2 dividendo = 2
            qtd_div++;
        }

        dividendo=3;//divisro de 3?
        quociente=(n-aux)/3;
        if((divisor-(dividendo*quociente))==resto){//3 dividendo = 3
            qtd_div++;
        }

        dividendo=5;//divisor de 5?
        quociente=(n-aux)/5;
        if((divisor-(dividendo*quociente))==resto){//5 dividendo = 5
            qtd_div++;
        }

        if(qtd_div==3){//divisivel pelos 3 simultaneamente
            printf("%d ",n-aux);
        }

        aux--;//pula para o prox num
        qtd_div=0;//atualiza para o prox loop
    }

    return 0;
}
