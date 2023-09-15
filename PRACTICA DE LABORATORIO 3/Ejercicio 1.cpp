#include<iostream>
using namespace std;

int main() {
    int limite;
    cout << "Ingrese un numero: ";
    cin >> limite;

    cout << "Números primos hasta " << limite << ": ";
    for (int num = 2; num <= limite; ++num) {
        int divisor = 2;
        int resto = 0;

        while (divisor * divisor <= num) {
            resto = num % divisor;
            if (resto == 0) {
                break;
            }
            divisor++;
        }

        if (resto != 0) {
            cout << num << " ";
        }
    }

    return 0;
}
