//¿Cuál es el número positivo más pequeño que es divisible por todos los números del 1 a 20?


#include <iostream>
using namespace std;

long long calcularMCD(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long calcularMCMDe1aN(int n) {
    long long mcm = 1;
    for (int i = 2; i <= n; i++) {
        mcm = (mcm * i) / calcularMCD(mcm, i);
    }
    return mcm;
}

int main() {
    int limite = 20;
    long long resultado = calcularMCMDe1aN(limite);

    cout << "El número positivo más pequeño divisible por todos los números del 1 al " << limite << " es: " << resultado << endl;

    return 0;
}