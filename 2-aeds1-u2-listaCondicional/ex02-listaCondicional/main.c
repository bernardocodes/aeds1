/*2.Fa�a um algoritmo que receba um n�mero inteiro e verifique se � par ou �mpar.*/

#include <stdio.h>

int main()
{
    int n,par,impar;//mem

    puts("\ndig n: ");//entrada
    scanf("%d",&n);

    if(n%2==0){//sa�da
        puts("\nn e par!");
    }else{
        puts("\nn e impar!");
    }

    return 0;
}
