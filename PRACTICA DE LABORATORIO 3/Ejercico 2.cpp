#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese un número n: ";
    std::cin >> n;

    int contador = 0;
    int numero = 2;

    std::cout << "Los primeros " << n << " números perfectos son: ";

    while (contador < n) {
        int sumaDivisores = 1;
        
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                sumaDivisores += i;
                if (i != numero / i) {
                    sumaDivisores += numero / i;
                }
            }
        }

        if (sumaDivisores == numero) {
            std::cout << numero << " ";
            contador++;
        }
        numero++;
    }

    std::cout << std::endl;

    return 0;
}
