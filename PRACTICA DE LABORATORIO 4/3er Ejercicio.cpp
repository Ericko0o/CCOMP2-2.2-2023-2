//¿Cuál es el mayor factor primo del número? 600851475143

#include <iostream>
#include <cmath>

long long mayorFactorPrimo(long long n) {
    long long mayor = -1;

    while (n % 2 == 0) {
        mayor = 2;
        n /= 2;
    }

    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            mayor = i;
            n /= i;
        }
    }

    if (n > 2) {
        mayor = n;
    }

    return mayor;
}

int main() {
    long long numero = 600851475143;
    long long resultado = mayorFactorPrimo(numero);

    std::cout << "El factor primo más grande de " << numero << " es: " << resultado << std::endl;

    return 0;
}
