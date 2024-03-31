/*
Exerc�cio 49
Crie um programa em C que receba um n�mero inteiro de 1 a 10 e, ent�o, imprima sua tabuada na
tela. Utilize estruturas de repeti��o.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;//mem

    printf("dig n: \n");//entrada
    scanf("%d",&n);
    if(n<1||n>10){
        printf("n deve ser: >=1 e <=10!");
        exit(0);//encerrar valor inv�lido - uma alternativa conhecida seria um do while, que so termina quando um valor v�lido for dig
    }

    printf("som:\n");
    for(int i=1;i<=10;i++){//montagem tabuada som
        printf("%d + %d = %d\n",i,n,n+i);
    }

    printf("sub:\n");
    for(int i=1;i<=10;i++){//montagem tabuada sub
        printf("%d - %d = %d\n",n+i,n,(n+i)-n);
    }

    printf("mul:\n");
    for(int i=1;i<=10;i++){//montagem tabuada mul
        printf("%d * %d = %d\n",i,n,n*i);
    }

    printf("div:\n");
    for(int i=1;i<=10;i++){//montagem tabuada div
        printf("%d / %d = %d\n",i*n,n,(i*n)/n);
    }

    return 0;
}
