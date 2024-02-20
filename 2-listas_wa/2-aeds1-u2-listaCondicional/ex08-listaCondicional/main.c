/*8.
Fa�a um programa que receba o c�digo correspondente ao cargo de um funcion�rio
e seu sal�rio atual e mostre o cargo,
o valor do aumento e seu novo sal�rio, de acordo com a tabela.
Caso um c�digo inv�lido seja informado, mostre a mensagem �C�digo inv�lido!�.

codigo	cargo		percentual
1	escrituario	50%
2	secretario	35%
3	caixa		20%
4	gerente		10%
5	diretor		n�o tem aumento

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //mem�ria
    int codigo, perc;
    float salario_a,n_salario;//salario atual e novo salario
    float v_aumento;//valor aumento
    //entrada
    printf("\ndig cod: ");
    scanf("%d",&codigo);
    printf("\ndig sal. atual: ");
    scanf("%f",&salario_a);
    //pros - setando perc (var usada no pros seguinte)/imprimindo cargo
    if(codigo==1){
        perc = 50;
        printf("\ncargo = escrituario!");
    }else if(codigo==2){
        perc = 35;
        printf("\ncargo = secretario!");
    }else if(codigo==3){
        perc = 20;
        printf("\ncargo = caixa!");
    }else if(codigo==4){
        perc = 10;
        printf("\ncargo = gerente!");
    }else if(codigo==5){
        printf("\ncargo = diretor!");
        printf("\nn�o tera aumento!");
        printf("\nsalario = %f",salario_a);
        exit(0);
    }else{
        printf("\ncodigo invalido!");
        exit(1);
    }//fim else
    //pros - calculando aumento e salario
    v_aumento = (salario_a/100)*perc;
    n_salario = v_aumento + salario_a;
    //sa�da
    printf("\nvalor aumento: %.2f",v_aumento);
    printf("\nvalor novo salario: %.2f",n_salario);
    return 0;
}
