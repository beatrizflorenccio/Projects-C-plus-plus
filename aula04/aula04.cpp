#include <iostream>

using namespace std;

int main() {
    int varInt = 100;
    char c = 'r';
    double dFlutu = 5.99;
    float fFlutu = 5.99;

    cout << "O valor de varInt: " << varInt << endl;
    cout << "O valor de c: " << c << endl;
    cout << "O valor de dFlutu: " << dFlutu << endl;
    cout << "O valor de fFlutu: " << fFlutu << endl;

    //operador sizeof
    cout << "Memoria de varInt: " << sizeof(varInt) << "bytes" << endl;
    cout << "Memoria de c: " << sizeof(c) << "byte" << endl;
    cout << "Memoria de dFlutu: " << sizeof(dFlutu) << "bytes" << endl;
    cout << "Memoria de fFlutu: " << sizeof(fFlutu) << "bytes" << endl;
}
