#include <stdio.h>
#include <stdlib.h>

int main()//ESTE CÓDIGO FUNCIONA PARA AS DUAS PROVAS
{
    int n,maior,menor,aux;

    scanf("%d%*c",&aux);//usuario digita 2 num
    scanf("%d%*c",&n);

    maior=n;
    menor=aux;

    if(maior<menor){//garante que maior seja o maior, e que menor seja o menor
        aux=maior;
        maior=menor;
        menor=aux;
    }

    for(int i=0;i<98;i++){//usuario digita o restante dos num
        scanf("%d%*c",&n);
        if(n>maior){//troca caso n seja o maior
            maior=n;
        }
        if(n<menor){//troca caso n seja o menor
            menor=n;
        }
    }

    printf("%d\n",maior);
    printf("%d",menor);

    return 0;
}
