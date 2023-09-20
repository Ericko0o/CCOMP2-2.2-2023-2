#include <iostream>

int main() {
    int term1 = 1;
    int term2 = 2;
    int nextTerm = 0;
    int sum = 0;

    while (term1 <= 4000000) {
        if (term1 % 2 == 0) {
            sum += term1;
        }

        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }

    std::cout << "La suma de los términos pares de la secuencia de Fibonacci que no exceden 4 millones es: " << sum << std::endl;

    return 0;
}
