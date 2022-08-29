#include <iostream>
//Lib para formatar valores
#include <iomanip>
using namespace std;
int main() {

    int t1 = 0;

    switch(t1) {
        case 0:
            cout << $t1 << endl;
            break;
        case 1:
            cout << $t1 << endl;
            break;
        default:
            cout << "Caso tudo falhe, essa é executada" << endl;
            break;
    }
   

    return 0;
}