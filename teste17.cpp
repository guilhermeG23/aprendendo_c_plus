#include <iostream>
//Lib para formatar valores
#include <iomanip>
using namespace std;
int main() {

    int t1 = 0;

    //Opere enquanto a condição for verdadeira
    //Se for falsa de primeira, ela nem executa
    while (t1 < 10) {
        cout << t1 << endl;
        t1++;
    }

    //Pelo menos executa uma vez
    //Depois decide oq fazer
    do {
        cout << t1 << endl;
        t1++;
    } while(t1 < 20);
   

    return 0;
}