/*
ex06-calculadora estranha: 

remoção no y-ésimo digito de x (x=1234,y=2, então saída=134)
*/

#include <stdio.h>
#include <math.h>

int main(void) {
  
  //mem
  int x,y;
  int cont=0;//num div
  int quociente;
  int resto;
  int resp=0;
  int posicao;

  //ent
  scanf("%d",&x);
  scanf("%d",&y);

  quociente=x;//dividir sem perder val ini
  
  while(quociente!=0){//descobrir num /10
    quociente/=10;
    cont++;
  }

  quociente=x;

  //cont = 4 ent começa na posicao = cont / se posico=y ent n faz

  posicao=cont;
  
  for(int i=0;i<cont;i++){//construir o novo num
    
    resto=quociente%10;
    quociente/=10;

    if(posicao!=y){//retirar num pos y
      resp+=resto*pow(10,i);//montar o num que foi decomposto
    }
    posicao--;
  }

  printf("%d",resp);//sai

  return 0;
}
