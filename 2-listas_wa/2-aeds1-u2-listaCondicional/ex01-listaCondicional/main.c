/*1.Faça um programa que leia dois números e mostre o maior.*/

#include <stdio.h>

int main()
{
    int n1,n2;//memória
    int maior,menor;

    puts("\ndigite n1: ");//entrada
    scanf("%d",&n1);
    puts("\ndigite n2: ");
    scanf("%d",&n2);

    if(n1>n2){
        printf("\n\no maior e: %d",n1);//saída
    }else if(n1<n2){
        printf("\n\no maior e: %d",n2);//saída
    }else{
        printf("\n\nos numeros digitados sao iguais!");//saída
    }
    return 0;
}
