#include <iostream>

using namespace std;

/*
pretendo com os ciclos while ou do.while
obter ao valor do exponecial de um numero

A base é 2 e o expoente é 3.
Vocé multiplica o 2 por ele mesmo 3 vezes : 2 x 2 x 2 = 8
base n, expoente 0 >> sempre 1
*/

int main () {

    int base, expoente;
    int resultado=1;

    cout << "Diga a base: ";
    cin >> base;
    cout << "Diga o expoente: ";
    cin >> expoente;

    while (expoente >0) {
        resultado = resultado * base;
        expoente--;
    }

    cout << "Resultado: " << resultado;

    return 0;
}
