//toda função tem um parâmetro e um retorno
/*
-toda função retorna o seu próprio tipo,
-o que estiver entre parênteses é o que ela retorna,
    por isso a main, que não retorna nada tem "voide"...
*/

/*
-o return 0 está lá para dizer que rodou tudo certo
-PERGUNTA: o return pode ser usado para outro propósito?
    ex: se fosse uma outra função, diferente da main, o return ainda teria o mesmo propósito? ele pode ter um obj diferente?
*/

/*
#include <stdio.h>

int main(void) {

  int x,y;
  x = 80;
  y = 2;
  printf("\nsoma: %c\n",(x+y));//imprime valor correspondente na tabela (binário)
  
  return 0;
  
}*/
/*
#include <stdio.h>

int main(void) {

  int x,y;
  x = 80;
  y = 2;
  printf("\nsoma: %d\n",(x+y));

  return 0;

}*/

/*
#include <stdio.h>

int main(void) {

  int x,y;
  scanf("%d",&x);
  y = 1;
  printf("\nsoma: %d\n",(x+y));

  return 0;

}
*/

//ex do lab: operações básicas e inverter as que fizerem sentido (sub e div)
//esse foi o ex entregue na tarefa do canvas
#include <stdio.h>

int main(void) {

  int x,y;//memória
  
  printf("\ndig num x: ");//entrada
  scanf("%d",&x);
  printf("\ndig num y: ");
  scanf("%d",&y);

  printf("\nx+y= %d",(x+y));//saída 
  printf("\nx-y= %d",(x-y));
  printf("\nx*y= %d",(x*y));
  printf("\nx/y= %d",(x/y));

  //operações invertidas:
  printf("\n\noperacoes invertidas: \n");
  printf("\ny-x= %d",(y-x));
  printf("\ny/x= %d",(y/x));
  
  return 0;
  
}

//--> escrever o código de pessoa no nome do arquivo .c
