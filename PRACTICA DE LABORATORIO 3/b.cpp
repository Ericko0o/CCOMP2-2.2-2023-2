#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, siguiente;
    int primeraIteracion = true;

    cout << "Introduce la cantidad de términos de Fibonacci que deseas: ";
    cin >> n;

    for (int i = 1; i <= n+1; i++) {
        if (primeraIteracion) {
            primeraIteracion = false;
        } else {
            cout << a << " ";
        }
        
        siguiente = a + b;
        a = b;
        b = siguiente;
    }

    return 0;
}
