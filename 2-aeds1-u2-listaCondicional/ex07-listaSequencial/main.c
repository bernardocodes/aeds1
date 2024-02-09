/*7.
A nota de um estudante é calculada a partir de 3 notas atribuídas respectivamente:
a um trabalho de laboratório,
uma avaliação semestral
e um exame final.

Cada uma dessas notas possui pesos diferentes para o cálculo da média final do aluno.

Assim, faca um algoritmo que receba as 3 notas, os pesos das mesmas e a média necessária para aprovação do aluno.

O algoritmo deve calcular e exibir a média ponderada para o aluno.

Além disso, mostre a situação
"Aprovado" (média maior ou igual que media aprovação),
"exame especial" (média entre 4 e a média de aprovação) ou
"Reprovado" (média menor que 4).*/

#include <stdio.h>

int main()
{
    //memória
    float nota1,nota2,nota3,nota4;
    float p1,p2,p3,p4;//pesos
    float media_apro;//necessária para a aprovação
    float media4;//auxiliar
    float m;//média do aluno

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
        printf("\nmedia aluno: %f",m);//saída
        printf("\nsituacao: APROVADO!");
    }else if(m<4){
        printf("\nmedia aluno: %f",m);//saída
        printf("\naluno REPROVADO!");
    }else if(4<=m&&m<=media_apro){
        printf("\nsituacao: exame especial!");
        printf("\ndig nota do exame especial: ");
        scanf("%f",&nota4);//entrada
        printf("\ndig p4: ");
        scanf("%f",&p4);

        media4=((nota1*p1)+(nota2*p2)+(nota3*p3)+(nota4*p4))/(p1+p2+p3+p4);//pros

        if(media4>=media_apro){
            printf("\nmedia aluno: %f",media4);//saída
            printf("\nsituacao: APROVADO!");
        }else{
            printf("\nmedia aluno: %f",media4);//saída
            printf("\nsituacao: REPROVADO!");
        }//fim else
    }//fim else if

    return 0;
}
