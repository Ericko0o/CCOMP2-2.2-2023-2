//Encuentra la suma de todos los múltiplos de 3 o 5 bajo 1000

#include <iostream>

int main() {
    int suma = 0;

    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            suma += i;
        }
    }

    std::cout << "La suma de los múltiplos de 3 o 5 por debajo de 1000 es: " << suma << std::endl;

    return 0;
}