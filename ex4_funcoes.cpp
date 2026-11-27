#include <iostream>
#include <string>
using namespace std;

string pedeNome() {
    string primeiroNome, ultimoNome;

    cout << "Digite o seu primeiro nome: ";
    cin >> primeiroNome;

    cout << "Digite o seu último nome: ";
    cin >> ultimoNome;

    return primeiroNome + " " + ultimoNome;
}

int main() {
    string nomeCompleto = pedeNome();
    cout << "Nome completo: " << nomeCompleto << endl;
    return 0;
}
