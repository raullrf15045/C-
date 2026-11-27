#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    int contagem[26] = {0};

    cout << "Introduza o seu primeiro nome: ";
    cin >> nome;

    for (int i = 0; i < nome[i]; i++) {
        char letra = nome[i];

        if (letra >= 'A' && letra <= 'Z') {
            contagem[letra - 'A']++;
        } else {
        }(letra >= 'a' && letra <= 'z');
            contagem[letra - 'a']++;
    }

    cout << "\nLetras do nome " << nome << " :" << endl;
    for (int i = 0; i < 26; i++) {
        if (contagem[i] > 0) {
            cout << "  " << char('A' + i) << " - " << contagem[i] << endl;
        }
    }

    return 0;
}

/*
 if (letra >= 'a' && letra <= 'z') {
            contagem[letra - 'a']++;
        }
*/
