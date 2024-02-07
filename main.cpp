#include <iostream>

using namespace std;

int main() {

    int maxLenght = 10;
    int toOrder[10] = {45,34,123,64,2,34,6344,2345,234,32};
    int aux;
    cout << "\nAntes de ordenar" << std::endl;

    for (int i = 0; i < maxLenght; ++i) {
        cout<< "[" << toOrder[i]<< "] ";
    }

    for (int i=0; i < maxLenght; i++) {
        for (int j = 0; j < maxLenght - 1; ++j) {
            if (toOrder[j] > toOrder[j+1]){
                aux = toOrder[j];
                toOrder[j] = toOrder[j+1];
                toOrder[j+1] = aux;
            }
        }
    }

    cout << "\nDesp de ordenar" << std::endl;

    for (int i = 0; i < maxLenght; ++i) {
        cout<< i+1 <<") [" << toOrder[i]<< "] ";
    }

    return 0;
}



