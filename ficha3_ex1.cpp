#include <iostream>

using namespace std;

int funcaoSomarNs(int x) {
    if (x == 0){
        return 0;
    } else {
        if (x>0) {
            return x + funcaoSomarNs(x-1);
        } else {
            return x + funcaoSomarNs(x+1);
        }

    }

}

int main () {
    int n;

    cout << "Da me um numero: ";
    cin >> n;

    cout << "A soma de " << n << " = " << funcaoSomarNs(n) << endl;
    return 0;
}
