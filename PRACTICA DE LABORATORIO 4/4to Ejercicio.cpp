//Encuentra el palíndromo más grande hecho del producto de dos numerosde 3 dígitos.

#include <iostream>

bool esPalindromo(int num) {
    int numReverso = 0;
    int numOriginal = num;

    while (num > 0) {
        int digito = num % 10;
        numReverso = numReverso * 10 + digito;
        num /= 10;
    }

    return numOriginal == numReverso;
}

int encontrarPalindromoMasGrande() {
    int palindromoMasGrande = 0;

    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int producto = i * j;
            if (producto <= palindromoMasGrande) {
                break;
            }
            if (esPalindromo(producto)) {
                palindromoMasGrande = producto;
            }
        }
    }

    return palindromoMasGrande;
}

int main() {
    int resultado = encontrarPalindromoMasGrande();

    std::cout << "El palíndromo más grande obtenido al multiplicar dos números de tres dígitos es: " << resultado << std::endl;

    return 0;
}

