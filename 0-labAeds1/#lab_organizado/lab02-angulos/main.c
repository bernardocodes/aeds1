#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ang;

    int quadrante, inteiro, voltas, sinal=1;
    int aux;
    double decomposto;

    //DIG ANG
    scanf("%d%*c",&ang);

    if(ang<0){//módulo do ang
        ang*=(-1);
        sinal*=-1;//guarda o sinal original
    }

    //QUADRANTE???
    if(ang<180){//garante que decomposto recebe valor do ang
        decomposto=ang;
    }else if(decomposto==0){
        decomposto=ang;
    }else{
        voltas=(ang/90)/4;//ang decomposto
        decomposto=ang-(360*voltas);
    }
    aux=decomposto;//manipular o decomposto e retomar esse valor mais tarde
    printf("decomposto: %lf\n",decomposto);

    if(decomposto>=0&&decomposto<=90){//filtro
        printf("primeiro quadrante!\n");
    }else if(decomposto>=91&&decomposto<=180){
        printf("segundo quadrante!\n");
    }else if(decomposto>=181&&decomposto<=270){
        printf("terceiro quadrante!\n");
    }else if(decomposto>=271&&decomposto<=360){
        printf("quarto quadrante!\n");
    }

    //SOBRE O EIXO???
    inteiro=decomposto;
    if(decomposto==0){
        printf("sobre o eixo!\n");
    }else if(inteiro%90==0){//para os eixos da primeira volta
        printf("sobre o eixo!\n");
    }

    //NUM DE VOLTAS???
    printf("voltas: %d\n",voltas);

    //SENTIDO???
    if(sinal>0){
        printf("sentido anti-horario!\n");
    }else{
        printf("sentido horario!\n");
    }

    //QTD PARA COMPLETAR MAIS UMA VOLTA???
    decomposto=aux;
    printf("faltam %ld graus para mais uma volta!",360-decomposto);
    return 0;
}
