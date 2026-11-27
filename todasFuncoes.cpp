#include <iostream>
#include <string>
using namespace std;

// 1. Função mostraMsg() - sem parâmetros e sem retorno
void mostraMsg() {
    cout << "Sou mesmo hacker!.." << endl;
}

// 2. Função soma2num() - recebe 2 inteiros e mostra a soma
void soma2num(int a, int b) {
    cout << "A soma de " << a << " + " << b << " = " << a + b << endl;
}

// 3. Função divide2Num() - recebe 2 inteiros e devolve a divisão
float divide2Num(int a, int b) {
    if (b == 0) {
        cout << "Erro: divisão por zero!" << endl;
        return 0;
    }
    return (float)a / b;
}

// 4. Função pedeNome() - pede o nome e devolve o nome completo
string pedeNome() {
    string primeiroNome, ultimoNome;

    cout << "Digite o seu primeiro nome: ";
    cin >> primeiroNome;

    cout << "Digite o seu último nome: ";
    cin >> ultimoNome;

    return primeiroNome + " " + ultimoNome;
}

int main() {
    // Teste 1
    cout << "=== 1. mostraMsg() ===" << endl;
    mostraMsg();
    cout << endl;

    // Teste 2
    cout << "=== 2. soma2num() ===" << endl;
    soma2num(10, 5);
    soma2num(7, 3);
    cout << endl;

    // Teste 3
    cout << "=== 3. divide2Num() ===" << endl;
    cout << "10 / 2 = " << divide2Num(10, 2) << endl;
    cout << "15 / 4 = " << divide2Num(15, 4) << endl;
    cout << endl;

    // Teste 4
    cout << "=== 4. pedeNome() ===" << endl;
    string nome = pedeNome();
    cout << "Nome completo: " << nome << endl;

    return 0;
}
