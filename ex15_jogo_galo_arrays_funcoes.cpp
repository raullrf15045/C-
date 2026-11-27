#include <iostream>
#include <string.h>

using namespace std;

char grelha [9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
int jogadaValida;
int posicao;
int npeca;
string peca = "X";
int jogoTerminou;
int mensagem;

void grelhaf() {

    cout << "\n";
    cout << " " << grelha[0] << " | " << grelha[1] << " | " << grelha[2] << endl;
    cout << "---+---+---" << endl;
    cout << " " << grelha[3] << " | " << grelha[4] << " | " << grelha[5] << endl;
    cout << "---+---+---" << endl;
    cout << " " << grelha[6] << " | " << grelha[7] << " | " << grelha[8] << endl;
    cout << endl;

    string npeca = "X";
    bool jogo_terminou = false;
    int jogadas = 0;

}

 int escolher() {

    cout << "Jogador " << npeca << ", diz onde queres jogar (0-8): ";
    cin >> posicao;

}

int jogoAcabou() {

    if(grelha[0]!='0' && grelha[1]!='1' && grelha[2]!='2' &&
       grelha[3]!='3' && grelha[4]!='4' && grelha[5]!='5' &&
       grelha[6]!='6' && grelha[7]!='7' && grelha[8]!='8' ){
        jogoTerminou = true;
       }

}

bool alguemVenceu(){


    if (posicao == '0') { jogadaValida = true; }
    else if (posicao == '1' && '1' == '1') { jogadaValida = true; }
    else if (posicao == '2' && '2' == '2') { jogadaValida = true; }
    else if (posicao == '3' && '3' == '3') { jogadaValida = true; }
    else if (posicao == '4' && '4' == '4') { jogadaValida = true; }
    else if (posicao == '5' && '5' == '5') { jogadaValida = true; }
    else if (posicao == '6' && '6' == '6') { jogadaValida = true; }
    else if (posicao == '7' && '7' == '7') { jogadaValida = true; }
    else if (posicao == '8' && '8' == '8') { jogadaValida = true; }


}

int escolherPeca() {
    switch(posicao) {
        case 0:
            if (grelha[0] == '0') {
                grelha[0] = peca[0];
                jogadaValida = true;
            }
            break;

        case 1:
            if (grelha[1] == '1') {
                grelha[1] = peca[1];
                jogadaValida = true;
            }
            break;

        case 2:
            if (grelha[2] == '2') {
                grelha[2] = peca[2];
                jogadaValida = true;
            }
            break;

        case 3:
            if (grelha[3] == '3') {
                grelha[3] = peca[3];
                jogadaValida = true;
            }
            break;

        case 4:
            if (grelha[4] == '4') {
                grelha[4] = peca[4];
                jogadaValida = true;
            }
            break;

        case 5:
            if (grelha[5] == '5') {
                grelha[5] = peca[5];
                jogadaValida = true;
            }
            break;
        case 6:
            if (grelha[6] == '6') {
                grelha[6] = peca[6];
                jogadaValida = true;
            }
            break;

        case 7:
            if (grelha[7] == '7') {
                grelha[7] = peca[7];
                jogadaValida = true;
            }
            break;

        case 8:
            if (grelha[8] == '8') {
                grelha[8] = peca[8];
                jogadaValida = true;

            }
            break;

    }

    return 0;
}

int main () {

    while(!jogoTerminou){
        grelhaf();
        if(peca == "X"){
            cout << mensagem;
        } else {
            cout << "\njogador 2 (O): \n";
        }
    }

    if(jogadaValida = true) {
        escolher();
        if(peca == "X"){
                peca = "O";
            } else{
                peca = "X";
    }

        } else
            cout << "\nPosicao ja preenchida \n";


    alguemVenceu();
    jogoAcabou();


    return 0;
}
