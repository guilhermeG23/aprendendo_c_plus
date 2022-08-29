#include <iostream>
//Lib para formatar valores
#include <iomanip>
using namespace std;
int main() {

    bool t1 = true;
    bool t2 = false;
    
    if (t1 == t2) {
        cout << "variaveis são iguais" << endl;
    } else {
        cout << "variveis sao diferentes" << endl;
    }

    //If simples sem aspas
    if (t1 != t2)
        cout << "variaveis são diferentes" << endl;
    


    return 0;
}