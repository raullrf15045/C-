#include <iostream>

using namespace std;

/*
a. se escolher0 : sair do programa
b. se escolher1 : informar o utilizador " é bom programar"
c. se escolher2 : informar o utilizador " é muito bom programador"
d. se escolher3 : informar o utilizador " é muito excelente programador"
e. tudo o resto : "Não sei o que me estás a pedir"
*/

int main () {

    int x;
    do {
        cout << "Digite um numero entre 1 e 3\n";
        cout << "0 (sair do programa)\n";
        cout << "A sua opcao:";
        cin >> x;
    } while (x!=0);

    switch (x){
            case 0:
                break;

        case 1:
            cout << "E bom programador";
            break;

        case 2:
            cout << "E muito bom programador";
            break;

        case 3:
            cout << "E excelente programador";
            break;

        default:
            cout << "Nao sei o que me estas a pedir";
            break;


        }

    return 0;
}
