#include <iostream>
using namespace std;

int numPrimo(int numero) {
    if (numero <= 1) return 0;

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, num = 2;

    cout << "Introduce un número primo (se mostrará los números primos posteriores al ingresado) : ";
    cin >> n;

    while (num <= n) {
        if (numPrimo(num)) {
            cout << num << " ";
        }
        num++;
    }

    return 0;
}