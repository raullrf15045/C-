#include <iostream>

using namespace std;

int main () {

    int numeroAnos = 0;
    int anos, meses;
    int i;

    cout << "Da me um numero em anos: ";
    cin >> numeroAnos;

    for (i=1; i<=12; i++){
        meses = meses + numeroAnos;
    }

    cout << "Em meses= " << meses << "meses" << endl;


return 0;
}
