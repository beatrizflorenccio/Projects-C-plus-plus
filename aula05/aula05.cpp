#include <iostream>
#include <iomanip>

/*
    Stream -> fluxo/sequ�ncia de dados
    Biblioteca <iostream.h> possibilita a
    manipula��o de entrada e sa�da de dados no C++
    Biblioteca padr�o para envio e recebimento de dados:

*/

using namespace std;

int main() {

    //objeto cout
    cout << "Estudando entrada e saida de dados" << endl;

    //manipuladores
    cout << hex << 10 + 20 << endl;
    cout << setw(10) << 1 << endl;
    cout << setw(10) << 2 << endl;
    cout << setw(10) << 3 << endl;
    cout << setw(10) << 4 << endl;

    cout << hex << 10 + 20;
    cout << setw(10) << 1;
    cout << setw(10) << 2;
    cout << setw(10) << 3;
    cout << setw(10) << 4;

    return 0;
}
