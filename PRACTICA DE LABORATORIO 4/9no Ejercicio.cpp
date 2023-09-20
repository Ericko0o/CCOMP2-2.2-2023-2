#include <iostream>

int main() {
    int targetSum = 1000;
    int product = 0;

    for (int a = 1; a < targetSum / 2; a++) {
        for (int b = a + 1; b < targetSum / 2; b++) {
            int c = targetSum - a - b;
            if (a * a + b * b == c * c) {
                product = a * b * c;
                break;
            }
        }
        if (product != 0) {
            break;
        }
    }

    std::cout << "El producto abc de la terna pitagórica donde a + b + c = 1000 es: " << product << std::endl;

    return 0;
}
