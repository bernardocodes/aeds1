#include <stdio.h>
#include <math.h>

int main(void) {

  int opc;
  int x,y;

  //variaveis do case 1:
  int quociente=1, divisor, i=0, acc=0,resto,j;

  //scanf("%d%*c",&x);
  //scanf("%d%*c",&y);

  //scanf("%d%*c",&opc);

  x=1234;
  y=1;
  opc=1;//provisorio

  int pot_10;

  switch(opc){
    
    case 1://remoção do y ésimo dígito

      i=0;//conta posição
      divisor=x;//setar divisor
      
      while(quociente>0){
        
        quociente=divisor/10;//divisões
        resto=divisor%10;
        divisor=quociente;

        j=0;
        pot_10=1;
        while(j<i){
          pot_10*=10;
          j++;
        }
        
        
        if(i!=y){
          acc+=resto*pot_10;
          i++;
        }else{
          i++;
        }
        
      }
      printf("%d",acc);//novo num
      break;
    
    case 2:
      break;
    
    case 3:
      break;
    
  }
  
  return 0;
}
