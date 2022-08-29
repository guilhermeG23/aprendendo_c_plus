#include <iostream>
//Lib para formatar valores
#include <iomanip>
using namespace std;
int main() {

    int t1,t2;
    t1 = 4;
    t2 = 5;

    //O uso de equações são para saidas diretas no terminal ou em variaveis para conter o valor novo
    
    cout << "X: " << t1 << endl;
    cout << "Y: " << t2 << endl;
    cout << "-------------------" << endl;
    cout << "soma: " << t1 + t2 << endl;
    cout << "menos: " << t1 - t2 << endl;
    cout << "mult: " << t1 * t2 << endl;

    //Divisão de valores inteiros irão retornar um valor inteiro, para isso, os valores de divisão devem estar em um estado de float
    cout << "divisão: " << t1 / t2 << endl; //Recomendado jogar a saida da divisão em double pq pode ter valores diferentes de inteiros


    //resto
    cout << "Resto - 1: " << t1 % t2 << endl;
    cout << "Resto - 2: " << t2 % t1 << endl;

    return 0;
}