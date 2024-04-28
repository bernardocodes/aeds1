#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ang;

    int quadrante, inteiro, voltas=0, sinal=1;
    int aux;
    double decomposto;

    //DIG ANG
    scanf("%d%*c",&ang);

    if(ang<0){//módulo do ang
        ang*=(-1);
        sinal*=-1;//guarda o sinal original
    }

    //QUADRANTE???
    if(ang<=360&&ang>=0){//garante que decomposto recebe valor do ang
        decomposto=ang;
        aux=decomposto;//manipular o decomposto e retomar esse valor mais tarde
        if(sinal<0){
            decomposto = 360 - decomposto;//se ang for negativo
        }
    }else if(decomposto==0){
        decomposto=ang;
        aux=decomposto;//manipular o decomposto e retomar esse valor mais tarde
    }else{
        voltas=(ang/90)/4;//ang decomposto
        decomposto=ang-(360*voltas);//50

        aux=decomposto;//manipular o decomposto e retomar esse valor mais tarde

        if(sinal<0){//caso seja negativo
            aux=360-decomposto;
            decomposto=aux;
        }
    }

    //SOBRE O EIXO???
    inteiro=decomposto;
    if(decomposto==0){
        printf("Este angulo se encontra em um dos eixos\n");
    }else if(inteiro%90==0){//para os eixos da primeira volta
        printf("Este angulo se encontra em um dos eixos\n");
    }

    //testar se era positivo ou neg
    if(decomposto>=0&&decomposto<=90){//filtro
        printf("Primeiro quadrante\n");
    }else if(decomposto>=91&&decomposto<=180){
        printf("Segundo quadrante\n");
    }else if(decomposto>=181&&decomposto<=270){
        printf("Terceiro quadrante\n");
    }else if(decomposto>=271&&decomposto<=360){
        printf("Quarto quadrante\n");
    }

    //NUM DE VOLTAS???
    printf("%d volta(s) ",voltas);

    //SENTIDO???
    if(sinal>0){
        printf("sentido antihorario\n");
    }else{
        printf("sentido horario\n");
    }

    //QTD PARA COMPLETAR MAIS UMA VOLTA???
    if(sinal>0){
        printf("Falta(m) %ld graus (sentido antihorario) para completar %d volta(s)",360-aux,voltas+1);
    }else{
        if(voltas>0){
            printf("Falta(m) %ld graus (sentido horario) para completar %d volta(s)",aux,voltas+1);//aux ou 360-aux
        }else{
            printf("Falta(m) %ld graus (sentido horario) para completar %d volta(s)",360-aux,voltas+1);//aux ou 360-aux
        }
    }

    return 0;
}
