#include <stdio.h>
#include <stdlib.h>

int main()//ESSE C�DIGO VALE PARA AS DUAS PROVAS
{
    int n;
    int cont=0;//pq contagem come�a do zero

    scanf("%d%*c",&n);

    for(int i=n;i>0;i--){//divis�es com quociente n at� 0
        if(n%i==0){//caso a divis�o seja inteira
            cont++;
        }
    }

    if(cont==2){//2 div inteiras, primo
        printf("PRIMO!");
    }else if(n!=1){//diferente 2 div inteiras, ou � 1(primo) ou n�o � primo
        printf("NAO primo!");
    }else{
        printf("PRIMO!");// 1 nao ter� 2 div inteiras, mas � primo
    }

    return 0;
}
