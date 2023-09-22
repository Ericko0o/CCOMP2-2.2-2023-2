//Encuentra la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.

#include <iostream>

int main() {
    int n = 100;
    int sumaDeCuadrados = 0;
    int cuadradoDeLaSuma = 0;

    for (int i = 1; i <= n; i++) {
        sumaDeCuadrados += i * i;
    }

    int suma = n * (n + 1) / 2;
    cuadradoDeLaSuma = suma * suma;

    int diferencia = cuadradoDeLaSuma - sumaDeCuadrados;

    std::cout << "La diferencia entre la suma de los cuadrados y el cuadrado de la suma de los primeros " << n << " números naturales es: " << diferencia << std::endl;

    return 0;
}
