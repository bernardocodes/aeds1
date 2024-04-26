/**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota,quociente;
    char resp='N';
    scanf("%d%*c",&nota);

    //APROVADO???
    quociente=nota/60;// nota>=60, quociente inteiro = 1... nota<=60, quociente inteiro = 0
    resp+=quociente*(5);//se quociente = 0, muda pra s... se quociente = 1, deixa n
    printf("%c\n",resp);

    //RECO???
    resp='N';
    int q1,q2;//quocientes auxiliares 1 e 2
    q1=nota/60;
    q2=nota/40;
    resp+=((q1*(-5))+5)*q2;//'s' somente se q2 < nota < q1
    printf("%c\n",resp);

    //REPROVOU DIRETO???
    resp='N';
    quociente=nota/40;//nota>=40, quociente = 1 (vai zerar equação e não muda nada)... nota<=40, quociente = 0 ('s')
    resp+=5+(quociente*(-5));//'s' se o quociente < 40
    printf("%c\n",resp);

    /*
    resp='s';
    quociente=nota/40;
    resp+=quociente*(-5);
    printf("reprovou direto? %c\n",resp);
    */

    return 0;
}
