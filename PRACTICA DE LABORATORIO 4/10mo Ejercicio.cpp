#include <iostream>
#include <vector>

long long sumOfPrimesBelowN(long long n) {
    std::vector<bool> isPrime(n, true);
    long long sum = 0;

    for (long long p = 2; p < n; p++) {
        if (isPrime[p]) {
            sum += p;

            for (long long i = p * p; i < n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    return sum;
}

int main() {
    long long limit = 2000000;
    long long result = sumOfPrimesBelowN(limit);

    std::cout << "La suma de todos los números primos por debajo de " << limit << " es: " << result << std::endl;

    return 0;
}
