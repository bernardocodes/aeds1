/*Faça um programa que calcule a potência x^y  onde x>=0 e y>=0 e ambos são inteiros.
Faça em c++, onde uma versão realiza passagem por valor e a outra por referência*/
#include <iostream>

namespace r{
    int pot(int &x,int &y){
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
}
namespace v{
    int pot(int x,int y){//retorna x^y
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
}
int main()
{
    int x,y,resp;
    char passagem;

    std::cout << "dig x,y e tipo passagem (v ou r):" << std::endl;
    std::cin >> x >> y >> passagem;//ler os valores

    if(passagem=='v'){//decidir o tipo de passagem
        std::cout << v::pot(x,y) << std::endl;
    }else if(passagem=='r'){
        r::pot(x,y);
        std::cout << x << std::endl;
    }else{//tipo inválido
        std::cout << "opc invalida!";
    }
    return 0;
}
