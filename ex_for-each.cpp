#include <iostream>

using namespace std;

int main () {

    string myNomes[] = {"Jarvis", "Viviane", "Batman", "Ze"};
    
    for (string nomes : myNomes) {
        cout << nomes << "\n";
    }

    return 0;
}