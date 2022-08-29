#include <iostream>
//Lib para formatar valores
#include <iomanip>
using namespace std;
int main() {
    cout << "Value in normal: ";
    cout << 10 + 15 << endl;

    cout << "Value in Hex: ";
    cout << hex <<  10 + 15 << endl;

    //Espancando saida 
    cout << "Formatando a saida: ";
    cout << setw(10) << 10 + 20 << endl;

    return 0;
}