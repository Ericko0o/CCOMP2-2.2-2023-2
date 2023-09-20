#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    if (number <= 3) {
        return true;
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int findNthPrime(int n) {
    int count = 0;
    int candidate = 2;

    while (count < n) {
        if (isPrime(candidate)) {
            count++;
            if (count == n) {
                return candidate;
            }
        }
        candidate++;
    }

    return -1;
}

int main() {
    int n = 10001;
    int result = findNthPrime(n);

    std::cout << "El " << n << " número primo es: " << result << std::endl;

    return 0;
}
