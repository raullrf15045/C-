#include <iostream>

using namespace std;

int main() {

    int idade;
    string mensagem, localidade;
    string genero ,nome;

    cout << "Intruduza o nome: ";
    cin >> nome;

    cout << "Introduza tua idade: ";
    cin >> idade;

    cout << "Intruduza tua localidade: ";
    cin >> localidade;

    cout << "Intruduza seu genero (M/F): ";
    cin >> genero;

     if (genero == "M") {
            cout << "Caro Sr.";
    } if (genero == "F") {
            cout << "Cara Sra.";
    }

    mensagem = mensagem + nome;

    if (idade >= 18) {
            mensagem = " e maior de idade";
    } else  {
            mensagem = " e menor de idade";
    }

    mensagem += " e mora em ";
    mensagem += localidade;

    cout << endl << mensagem << endl;

    return 0;

}
