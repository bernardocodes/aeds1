/*15. Escreva um programa em linguagem C que leia um peso e o n�mero de um planeta, e imprima o valor
correspondente ao peso neste planeta. A rela��o de planetas � dada a seguir juntamente com o valor das
gravidades relativas � Terra.

C�digo		Gravidade 	Planeta
		    Relativa
1-------------0,37------Merc�rio
2 	          0,88 		V�nus
3-------------0,38------Marte
4 	          2,64 		J�piter
5-------------1,15------Saturno
6 	          1,17 		Urano

Para calcular o peso no planeta, deve ser utilizada a f�rmula: PP = PT x G,
em que:
PP = Peso no Planeta
PT = Peso na Terra
G = Gravidade Relativa
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //mem�ria
    int num;
    float pp;//peso no planeta
    float pt;//peso na terra
    float g;//gravidade relativa

    //menu - por incr�vel que pare�a, esse menu fica bonito no codeblocks, mas no cod ficou assim
    printf("CALCULO DA GRAVIDADE RELATIVA EM OUTRO PLANETA:\n");
    printf("\nMENU:\n\n");
    printf("Codigo		Gravidade 	Planeta\n");
    printf("                Relativa           \n");
    printf("1-----------------0,37----------Mercurio\n");
    printf("2 	          0,88 		Venus\n");
    printf("3-----------------0,38----------Marte\n");
    printf("4 	          2,64 	        Jupiter\n");
    printf("5-----------------1,15----------Saturno\n");
    printf("6 	          1,17 	  	Urano\n");

    //entrada de dados
    printf("\nDIGITE PESO (NA TERRA): ");
    scanf("%f",&pt);
    printf("\nDIGITE CODIGO DO PLANETA: ");
    scanf("%d",&num);

    //decidir qual planeta vai ser, com base no valor dig pelo usu�rio
    if(num==1){
        g = 0.37;
    }else if(num==2){
        g = 0.88;
    }else if(num==3){
        g = 0.38;
    }else if(num==4){
        g = 2.64;
    }else if(num==5){
        g = 1.15;
    }else if(num==6){
        g = 1.17;
    }else if(num<=0||num>6){
        printf("codigo invalido!");
        exit(0);
    }

    //pros
    pp = pt * g;//conta para descobrir peso no planeta

    //sa�da
    printf("\no peso no planeta vale: %.2f",pp);

    return 0;
}
