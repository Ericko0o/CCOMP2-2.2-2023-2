#include <iostream>
#include <vector>

bool isPalindrome(int num) {
    std::vector<int> digits;
    int originalNum = num;

    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }

    int left = 0;
    int right = digits.size() - 1;
    while (left < right) {
        if (digits[left] != digits[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int findLargestPalindrome() {
    int largestPalindrome = 0;

    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int product = i * j;
            if (product <= largestPalindrome) {
                break;
            }
            if (isPalindrome(product)) {
                largestPalindrome = product;
            }
        }
    }

    return largestPalindrome;
}

int main() {
    int result = findLargestPalindrome();

    std::cout << "El palíndromo más grande obtenido al multiplicar dos números de tres dígitos es: " << result << std::endl;

    return 0;
}
