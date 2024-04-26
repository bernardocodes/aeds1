#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota,quociente;
    char resp='N';
    scanf("%d%*c",&nota);

    //APROVADO???
    quociente=nota/60;// nota>=60, quociente = 1... nota<=60, quociente = 0
    resp+=quociente*(5);//'S' somente se quociente = 1
    printf("%c\n",resp);

    //RECO???
    resp='N';
    int q1,q2;//quocientes auxiliares 1 e 2
    q1=nota/60;
    q2=nota/40;
    resp+=((q1*(-5))+5)*q2;//'S' somente se q2 < nota < q1
    printf("%c\n",resp);

    //REPROVOU DIRETO???
    resp='N';
    quociente=nota/40;//nota>=40, quociente = 1 ... nota<=40, quociente = 0
    resp+=(5)*( (((nota/80)*(-1))+1) * (1+((nota/40)*(-1))));
    printf("%c\n",resp);
    //'S' se quociente < 40 , 'N' se quociente > 40
    //(((nota/80)*(-1))+1) garante que se nota > 79, também zera a equação, caso contrário, daria 2 (resulta em um erro)

    return 0;
}
