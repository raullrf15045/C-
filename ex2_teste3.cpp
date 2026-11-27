#include <iostream>

using namespace std;

int main() {

    string nome;
    int contador_a = 0;
    int contador_i = 0;

    cout << "Introduza o seu primeiro nome: ";
    cin >> nome;

    for (int i = 0; i < nome[i]; i++) {
        char letra = nome[i];

        if (letra == 'a' || letra == 'A') {
            contador_a++;
        }
        if (letra == 'i' || letra == 'I') {
            contador_i++;
        }
    }

    cout << "O nome " << nome << " tem:" << endl;
    cout << "  " << contador_a << " letra(s) 'a'" << endl;
    cout << "  " << contador_i << " letra(s) 'i'" << endl;

    return 0;
}
