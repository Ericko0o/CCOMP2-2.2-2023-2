#include <iostream>
#include <numeric>

int main() {
    int smallestMultiple = 1;

    for (int i = 2; i <= 200; i++) {
        smallestMultiple = std::lcm(smallestMultiple, i);
    }

    std::cout << "El número positivo más pequeño divisible por todos los números de 1 a 200 es: " << smallestMultiple << std::endl;

    return 0;
}
