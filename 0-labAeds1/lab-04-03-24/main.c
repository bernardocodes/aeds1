/*ENUNCIADO:  Faça um programa que receba a medida de um ângulo. Calcule e mostre o quadrante em que se localiza esse ângulo. Caso esteja sobre algum eixo, exibir a mensagem "Este ângulo se encontra em um dos eixos". Considere os quadrantes da trigonometria e, para ângulos maiores que 360o ou menores que −360, reduzi-los, mostrando também o número de voltas e o sentido da volta (horário ou anti-horário). Finalmente, mostre a quantidade de graus que falta para aumentar a quantidade de voltas.

EXEMPLO 1 (Entrada):

90

EXEMPLO 1 (Saída):

Este ângulo se encontra em um dos eixos.

Primeiro quadrante.

0 volta(s) (sentido horário).

Falta(m) 270 graus (sentido horário) para completar 1 volta(s).

EXEMPLO 2 (Entrada):

-480

EXEMPLO 2 (Saída):

Terceiro quadrante.

1 volta(s) (sentido anti horário).

Falta(m) 240 graus (sentido anti horário) para completar 2 volta(s).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //memória
    int ang;//ENTRADA
    int qtd_voltas;//num de voltas completas
    int resto;//resto da div de 360 pelo ang dig
    int forma_reduzida;//valor correspondente ao ang entre 0-360
    int falta_1volta;//num graus para completar uma volta

    //entrada
    printf("dig ang: ");
    scanf("%d",&ang);

    //está em alg eixo?
    if(ang%90==0){
        printf("este angulo se encontra em um dos eixos.\n");
    }

    //sentido
    if(ang>0){
        printf("sentido antihorario!\n");
    }else{
        printf("sentido horario!\n");
    }

    //qtd voltas
    qtd_voltas = ang / 360;
    printf("num voltas completas: %d\n",qtd_voltas);

    //resto
    resto = ang % 360;

    //qual quadrante
    if(ang<0){
        resto = 360 + resto;
    }
    if(resto>0&&resto<=90){
        printf("primeiro quadrante!\n");
    }
    if(resto>=91&&resto<=180){
        printf("segundo quadrante!\n");
    }
    if(resto>=181&&resto<=270){
        printf("terceiro quadrante!\n");
    }
    if(resto>=271&&resto<=360){
        printf("quarto quadrante!\n");
    }

    //graus para completar uma volta
    falta_1volta = 360 - resto;

    //forma reduzida - negativo
    if(resto<0){
        forma_reduzida = 360 + resto;
    }

    //forma reduzida - positivo
    if(resto>0){
        forma_reduzida = resto;
    }

    printf("forma reduzida = %d\n",forma_reduzida);

    printf("para completar mais uma volta faltam %d graus!",falta_1volta);

    return 0;
}
