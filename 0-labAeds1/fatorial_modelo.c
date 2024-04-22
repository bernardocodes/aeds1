#include <stdio.h>
#include <stdlib.h>

int fatorial_n(int n){
   if(n>1){
        return n*fatorial_n(n-1);//equivalente repetição
   }
}

int main()
{
    int num;
    scanf("%d",&num);//entrada

    int resp = fatorial_n(num);

    printf("%d",resp);//saída
    return 0;
}
