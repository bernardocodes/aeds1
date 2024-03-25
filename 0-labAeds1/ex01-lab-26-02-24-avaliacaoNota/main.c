/*ENUNCIADO: Você terá de fazer um programa que solicite uma nota,
entre 0 e 100, de um(a) aluno(a) e o programa irá avaliar se este(a): 
(a) fora aprovado(a) na disciplina; 
(b) pegou recuperação; 
e (c) reprovou direto. 

Quando a resposta for positiva, imprima o caractere 'S' na tela; caso contrário, imprima 'N'.

RESTRIÇÕES: É obrigatório resolver este problema SEM USO DE CONDICIONAIS, ou seja, somente operações e expressões aritméticas (+,-,/,%).*/

//OBS: REVISAR ESSE CÓDIGO AQUI! 

#include <stdio.h>

int main()
{
    int nota, res;//entrada
    scanf("%d",&nota);
  
    res = 'N' + 5*((nota/60));//aprovado?
    printf("%c\n",res);

    res = 'N' + 5*(1-(nota/60));//reco?
    printf("%c\n",res);

    res = 'N' + 5*(nota/45)*(1-(nota/60));//reprovado?
    printf("%c\n",res);

    return 0;
}

//EXEMPLO COM OS PRINCÍPIOS DA SOLUÇÃO, EM UMA SITUAÇÃO MAIS SIMPLES: (nota par ou impar)

/*
#include <stdio.h>
#include <stdlib.h>

int main()//ex nota par ou impar
{
    int nota, res;
    scanf("%d",&nota);
    //res = 'N' + 5;para pular 5 letras
    //res = 'N' + 5*(nota%2);colocar 1-( para inverter de N para S --> par ou impar
    res = 'N' + 5*(1-(nota%2));
    printf("%c\n",res);

    return 0;
}

//DICAS:
//conjuto de caixinhas (que seriam os parênteses) e interruptores (que são determinados sinasi, num ou caracteres 
que podem ativar ou desativar determinada caixinha)
//aprovado nota>=60
//reprovado nota<=45
//para o ex, vc deve copiar o cod acima para cada situação
//CHAVE: RESTO DA DIVISÃO, QUE VAI DEIXAR 0 OU 1 E PREENCHER O PARENTESES

*/
