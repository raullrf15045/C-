#include <iostream>
#include <string>

using namespace std;

char grelha[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
char peca = 'X';
bool jogoTerminou = false;

void mostrarGrelha() {
    cout << "\n";
    cout << " " << grelha[0] << " | " << grelha[1] << " | " << grelha[2] << endl;
    cout << "---+---+---" << endl;
    cout << " " << grelha[3] << " | " << grelha[4] << " | " << grelha[5] << endl;
    cout << "---+---+---" << endl;
    cout << " " << grelha[6] << " | " << grelha[7] << " | " << grelha[8] << endl;
    cout << endl;
}

bool jogadaValida(int posicao) {
    if (posicao < 0 || posicao > 8) return false;
    return (grelha[posicao] != 'X' && grelha[posicao] != 'O');
}

void fazerJogada(int posicao) {
    grelha[posicao] = peca;
}

bool alguemVenceu() {

    if (grelha[0] == grelha[1] && grelha[1] == grelha[2]) return true;
    if (grelha[3] == grelha[4] && grelha[4] == grelha[5]) return true;
    if (grelha[6] == grelha[7] && grelha[7] == grelha[8]) return true;
    if (grelha[0] == grelha[3] && grelha[3] == grelha[6]) return true;
    if (grelha[1] == grelha[4] && grelha[4] == grelha[7]) return true;
    if (grelha[2] == grelha[5] && grelha[5] == grelha[8]) return true;
    if (grelha[0] == grelha[4] && grelha[4] == grelha[8]) return true;
    if (grelha[2] == grelha[4] && grelha[4] == grelha[6]) return true;

    return false;
}

bool grelhaCheia() {
    for (int i = 0; i < 9; i++) {
        if (grelha[i] != 'X' && grelha[i] != 'O') {
            return false;
        }
    }
    return true;
}

int main() {
    int posicao;

    cout << "=== JOGO DO GALO ===" << endl;
    cout << "Jogador 1: X" << endl;
    cout << "Jogador 2: O" << endl;

    while (!jogoTerminou) {
        mostrarGrelha();

        cout << "Jogador " << peca << ", escolhe uma posicao (0-8): ";
        cin >> posicao;

        if (!jogadaValida(posicao)) {
            cout << "Posicao invalida ou ja ocupada! Tenta outra vez.\n";
            continue;
        }

        fazerJogada(posicao);

        if (alguemVenceu()) {
            mostrarGrelha();
            cout << "Parabens! O jogador " << peca << " venceu!\n";
            jogoTerminou = true;
        }
        else if (grelhaCheia()) {
            mostrarGrelha();
            cout << "Empate! A grelha esta cheia.\n";
            jogoTerminou = true;
        }
        else {
            peca = (peca == 'X') ? 'O' : 'X';
        }
    }

    return 0;
}
