//Encuentra la suma de todos los números primos menores de dos millones.


#include <iostream>
#include <vector>

long long sumaDePrimosPorDebajoDeN(long long n) {
    std::vector<bool> esPrimo(n, true);
    long long suma = 0;

    for (long long p = 2; p < n; p++) {
        if (esPrimo[p]) {
            suma += p;

            for (long long i = p * p; i < n; i += p) {
                esPrimo[i] = false;
            }
        }
    }

    return suma;
}

int main() {
    long long limite = 2000000;
    long long resultado = sumaDePrimosPorDebajoDeN(limite);

    std::cout << "La suma de todos los números primos por debajo de " << limite << " es: " << resultado << std::endl;

    return 0;
}
