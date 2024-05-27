/*Faça um programa que calcule a potência x^y  onde x>=0 e y>=0 e ambos são inteiros.
Faça em c++, onde uma versão realiza passagem por valor e a outra por referência*/
#include <iostream>

using namespace std;
int pot_referencia(int &x,int &y){
    int acc=1;
    if(y==0){
        x=1;
    }else{
        for(int i=0;i<y;i++){
            acc*=x;
        }
        x=acc;//atualizar o valor de x efetivamente
    }
}
int pot_valor(int x,int y){//retorna x^y
    int acc=1;
    if(y==0){
        return 1;
    }else{
        for(int i=0;i<y;i++){
            acc*=x;
        }
        return acc;
    }
}
int main()
{
    int x,y,resp;
    char passagem;

    cout << "dig x,y e tipo passagem (v ou r):" << endl;
    cin >> x >> y >> passagem;//ler os valores

    if(passagem=='v'){//decidir o tipo de passagem
        cout << pot_valor(x,y) << endl;
    }else if(passagem=='r'){
        pot_referencia(x,y);
        cout << x << endl;
    }else{//tipo inválido
        cout << "opc invalida!";
    }
    return 0;
}
