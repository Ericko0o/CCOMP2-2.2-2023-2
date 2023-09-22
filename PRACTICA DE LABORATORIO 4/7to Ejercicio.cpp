//Cuál es el 10001 primer número primo?

#include <iostream>

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    if (numero <= 3) {
        return true;
    }
    if (numero % 2 == 0 || numero % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int encontrarNesimoPrimo(int n) {
    int contador = 0;
    int candidato = 2;

    while (contador < n) {
        if (esPrimo(candidato)) {
            contador++;
            if (contador == n) {
                return candidato;
            }
        }
        candidato++;
    }

    return -1;
}

int main() {
    int n = 10001;
    int resultado = encontrarNesimoPrimo(n);

    std::cout << "El " << n << "º número primo es: " << resultado << std::endl;

    return 0;
}
