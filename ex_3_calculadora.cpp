#include <iostream> // io em c++

using namespace std;

int main () {
    string operacao;
    float n1;
    float n2;
    float calculo;

    cout << "Ola Batman, da-me dois numeros? ";
    cin >> n1;
    cin >> n2;

    cout << "Escolhe a operacao: ";
    cout << "somar, subtrair, multiplicar ou dividir: ";
    cin >> operacao;

    if (operacao == "somar") {
        calculo = n1 + n2;
        cout << "O total da soma e: " << calculo;

    }

    else if (operacao == "subtrair") {
        calculo = n1 - n2;
        cout << "O total da subtracao e: " << calculo;

    }

    else if (operacao == "multiplicar") {
        calculo = n1 * n2;
        cout << "O total da multiplicacao e: " << calculo;

    }

    else if (operacao == "dividir") {

        if (n2 == 0) {
            cout << "Impossivel fazer o calculo";
            cout << "o n2 nao pode ser 0";
        } else {
        calculo = (n1) / (n2);
        cout << "O total da divisao e: " << calculo;

    }

    } else {
        cout << "Operacao invalida!";
    }

    return 0;
}
