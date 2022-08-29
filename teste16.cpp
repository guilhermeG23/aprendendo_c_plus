#include <iostream>
//Lib para formatar valores
#include <iomanip>
using namespace std;
int main() {

    int t1 = 10;
    int t2 = 10;

    cout << t1 << endl;
    t1++; //Incrementa após o uso da variavel
    cout << t1 << endl;
    ++t1; //Incrementa antes do uso da variavel
    cout << t1 << endl;


    cout << "Pre: " << ++t2 << endl;
    cout << "Pos: " << t2++ << endl;
    cout << "Pos (Depois do incremento): " << t2 << endl;

    //O mesmo vale para os demais abaixo
    t1--;
    cout << t1 << endl;
    --t1;
    cout << t1 << endl;

    return 0;
}