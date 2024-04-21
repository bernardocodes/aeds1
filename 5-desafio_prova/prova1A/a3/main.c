#include <stdio.h>
#include <stdlib.h>

int main()//ESSE CÓDIGO VALE PARA AS DUAS PROVAS
{
    int n;
    int cont=0;//pq contagem começa do zero

    scanf("%d%*c",&n);

    for(int i=n;i>0;i--){//divisões com quociente n até 0
        if(n%i==0){//caso a divisão seja inteira
            cont++;
        }
    }

    if(cont==2){//2 div inteiras, primo
        printf("PRIMO!");
    }else if(n!=1){//diferente 2 div inteiras, ou é 1(primo) ou não é primo
        printf("NAO primo!");
    }else{
        printf("PRIMO!");// 1 nao terá 2 div inteiras, mas é primo
    }

    return 0;
}
