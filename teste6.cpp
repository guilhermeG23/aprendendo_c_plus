#include <iostream>
using namespace std;
int main() {

    int t1 = 1;
    char t2 = 'a';
    double t3 = 1.1;

    cout << "Info: " << t1 << endl;
    cout << "Com texto: " << t1 << endl;
    cout << "Memoria da variavel: " << sizeof(t1) << endl;
    cout << endl;
    cout << "Info: " << t2 << endl;
    cout << "Com texto: " << t2 << endl;
    cout << "Memoria da variavel: " << sizeof(t2) << endl;
    cout << endl;
    cout << "Info: " << t3 << endl;
    cout << "Com texto: " << t3 << endl;
    cout << "Memoria da variavel: " << sizeof(t3) << endl;

    return 0;
}