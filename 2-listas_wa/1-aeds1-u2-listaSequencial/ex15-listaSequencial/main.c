/*15. Faça um algoritmo que leia as seguintes informações de um empregado:
o número de horas trabalhadas,
o valor do salário mínimo
e o número de horas extras trabalhadas.

Calcule e mostre o salário que o empregado receberá seguindo as seguintes regras:
• o valor pago por hora trabalhada é 1/8 do salário mínimo;
• o valor pago por hora extra vale 1/4 do salário mínimo;
• o salário bruto equivale ao número de horas trabalhadas vezes o valor pago por hora trabalhada;
• a quantia a receber por horas extras equivale ao número de horas extras realizadas multiplicado pelo valor pago por hora extra;
• o salário a receber é a soma do salário bruto e da quantia a receber pelas horas extras.*/

#include <stdio.h>

int main()
{
    float h_trabalhadas;//memória
    float s_min;
    float h_extras;
    float s_bruto;
    float salario;

    puts("\ndig horas trabalhadas: ");//entrada
    scanf("%f",&h_trabalhadas);
    puts("\ndig salario min: ");
    scanf("%f",&s_min);
    puts("\ndig horas extras: ");
    scanf("%f",&h_extras);


    float valor_hora = s_min/8;//pros
    float valor_h_extra = s_min/4;
    float salario_he;

    s_bruto = h_trabalhadas * valor_hora;
    salario_he = h_extras * valor_h_extra;

    salario = s_bruto + salario_he;

    printf("\n\nsalario = %.2f",salario);//saída

    return 0;
}
