/*7.
A nota de um estudante � calculada a partir de 3 notas atribu�das respectivamente:
a um trabalho de laborat�rio,
uma avalia��o semestral
e um exame final.

Cada uma dessas notas possui pesos diferentes para o c�lculo da m�dia final do aluno.

Assim, faca um algoritmo que receba as 3 notas, os pesos das mesmas e a m�dia necess�ria para aprova��o do aluno.

O algoritmo deve calcular e exibir a m�dia ponderada para o aluno.

Al�m disso, mostre a situa��o
"Aprovado" (m�dia maior ou igual que media aprova��o),
"exame especial" (m�dia entre 4 e a m�dia de aprova��o) ou
"Reprovado" (m�dia menor que 4).*/

#include <stdio.h>

int main()
{
    //mem�ria
    float nota1,nota2,nota3,nota4;
    float p1,p2,p3,p4;//pesos
    float media_apro;//necess�ria para a aprova��o
    float media4;//auxiliar
    float m;//m�dia do aluno

    //entrada-notas e pesos
    puts("\ndigite nota1: ");
    scanf("%f",&nota1);
    puts("\ndigite p1: ");
    scanf("%f",&p1);
    puts("\ndigite nota2: ");
    scanf("%f",&nota2);
    puts("\ndigite p2: ");
    scanf("%f",&p2);
    puts("\ndigite nota3: ");
    scanf("%f",&nota3);
    puts("\ndigite p3: ");
    scanf("%f",&p3);
    puts("\ndigite media para aprovacao: ");
    scanf("%f",&media_apro);

    //pros
    m=((nota1*p1)+(nota2*p2)+(nota3*p3))/(p1+p2+p3);

    if(m>=media_apro){
        printf("\nmedia aluno: %f",m);//sa�da
        printf("\nsituacao: APROVADO!");
    }else if(m<4){
        printf("\nmedia aluno: %f",m);//sa�da
        printf("\naluno REPROVADO!");
    }else if(4<=m&&m<=media_apro){
        printf("\nsituacao: exame especial!");
        printf("\ndig nota do exame especial: ");
        scanf("%f",&nota4);//entrada
        printf("\ndig p4: ");
        scanf("%f",&p4);

        media4=((nota1*p1)+(nota2*p2)+(nota3*p3)+(nota4*p4))/(p1+p2+p3+p4);//pros

        if(media4>=media_apro){
            printf("\nmedia aluno: %f",media4);//sa�da
            printf("\nsituacao: APROVADO!");
        }else{
            printf("\nmedia aluno: %f",media4);//sa�da
            printf("\nsituacao: REPROVADO!");
        }//fim else
    }//fim else if

    return 0;
}
