//Existe exactamente un triplete pitagórico para el cual a+b+c=1000. Encuentra el producto abc.

#include <iostream>

int main() {
    int sumaObjetivo = 1000;
    int producto = 0;

    for (int a = 1; a < sumaObjetivo / 2; a++) {
        for (int b = a + 1; b < sumaObjetivo / 2; b++) {
            int c = sumaObjetivo - a - b;
            if (a * a + b * b == c * c) {
                producto = a * b * c;
                break;
            }
        }
        if (producto != 0) {
            break;
        }
    }

    std::cout << "El producto abc de la terna pitagórica donde a + b + c = 1000 es: " << producto << std::endl;

    return 0;
}
