#include <iostream>

int main() {
    int n = 100;
    int sumOfSquares = 0;
    int squareOfSum = 0;

    for (int i = 1; i <= n; i++) {
        sumOfSquares += i * i;
    }

    int sum = n * (n + 1) / 2;
    squareOfSum = sum * sum;

    int difference = squareOfSum - sumOfSquares;

    std::cout << "La diferencia entre la suma de los cuadrados y el cuadrado de la suma de los primeros " << n << " naturales es: " << difference << std::endl;

    return 0;
}
