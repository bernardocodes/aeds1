/*1.Fa�a um programa que leia dois n�meros e mostre o maior.*/

#include <stdio.h>

int main()
{
    int n1,n2;//mem�ria
    int maior,menor;

    puts("\ndigite n1: ");//entrada
    scanf("%d",&n1);
    puts("\ndigite n2: ");
    scanf("%d",&n2);

    if(n1>n2){
        printf("\n\no maior e: %d",n1);//sa�da
    }else if(n1<n2){
        printf("\n\no maior e: %d",n2);//sa�da
    }else{
        printf("\n\nos numeros digitados sao iguais!");//sa�da
    }
    return 0;
}
