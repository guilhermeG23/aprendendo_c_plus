#include <iostream>
//Lib para formatar valores
#include <iomanip>
using namespace std;
int main() {

    //Modificar o tamanho de armanzenamento de uma variavel inteira
    //O tamanho dos inteiros se modifica conforme o compilador, tente sempre arredondar para cima para garantir compabilidade com os sistemas
    int t1 = 0;
    short int t2 = 0;
    long int t3 = 0;
    
    int t4 = 0;
    signed int t5 = -10;
    unsigned int t6 = 10; //Não pode ter sinais neste tipo
    unsigned int t7 = -10; //Fazendo errado -> Simulando sujeira na memoria

    //Todas as variaveis int são do tipo signed, precisa do un para definir este estado

    char t8 = 127;
    char t9 = -127;
    
    cout << "t1" << " --- " << sizeof(t1) << " --- " << t1 << endl;
    cout << "t2" << " --- " << sizeof(t2) << " --- " << t2 << endl;
    cout << "t3" << " --- " << sizeof(t3) << " --- " << t3 << endl;

    cout << "t4" << " --- " << sizeof(t4) << " --- " << t4 << endl;
    cout << "t5" << " --- " << sizeof(t5) << " --- " << t5 << endl;
    cout << "t6" << " --- " << sizeof(t6) << " --- " << t6 << endl;
    cout << "t7" << " --- " << sizeof(t7) << " --- " << t7 << endl;

    cout << "t8" << " --- " << sizeof(t8) << " --- " << t8 << endl;
    cout << "t9" << " --- " << sizeof(t9) << " --- " << t9 << endl;

    return 0;
}