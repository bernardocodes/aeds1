#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resto, quociente, n;
    int soma=0;//acumulador soma dos impares
    int resp;

    scanf("%d%*c",&n);

    quociente=n;

    while(quociente>0){//enquanto a div for inteira

        resto=quociente%10;//resto � o digito separado

        if(resto%2!=0){//digito e par? ent soma!
            soma+=resto;
        }

        quociente/=10;//resultado ser� o novo quociente
    }

    resp=soma*soma*soma;//soma ao cubo

    printf("%d",resp);

    return 0;
}
