#include <iostream>

using namespace std;

int main () {

    int i=0;
    while (i<=10) {
        cout << i << endl;
        i+=2;
    }

    i=0;
    do {
        cout << i << endl;
        i+=2;
    } while (i<=10);

    return 0;
}
