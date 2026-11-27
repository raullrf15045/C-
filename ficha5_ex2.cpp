#include <iostream>

using namespace std;

int main () {

    int quantidade, num, soma=0;

    cout << "Qual numero queres somar ";
    cin >> quantidade;

    for (int i=1; i<=quantidade;i++) {
        cout << "Introduz o " << i << " numero: ";
        cin >> num;

        soma = soma + num;
    }

    cout << "Soma= " << soma << endl;

    return 0;
}
