#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese un número n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "El valor de n debe ser mayor que 0." << std::endl;
        return 1;
    }

    std::cout << "Los primeros " << n << " números de la secuencia de Fibonacci son: ";

    int a = 1, b = 1;

    if (n >= 1) {
        std::cout << a;
    }
    if (n >= 2) {
        std::cout << " " << b;
    }

    for (int i = 2; i < n; i++) {
        int temp = a;
        a = b;
        b += temp;
        std::cout << " " << b;
    }

    std::cout << std::endl;

    return 0;
}
