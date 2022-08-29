#include <iostream>
//Lib para formatar valores
#include <iomanip>
using namespace std;
int main() {

    //Valores são atribuidos da esquerda para a direita
    int t1 = 1;

    //Atribuição universal
    //É um atalho de escrita de operações matematicas, Ex:
    t1 = t1+1;
    cout << t1 << endl;
    
    t1 += 1;
    cout << t1 << endl;
    
    return 0;
}