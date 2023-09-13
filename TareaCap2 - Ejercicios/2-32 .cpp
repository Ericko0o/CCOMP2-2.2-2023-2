#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Ingresa tu edad: ";
    cin >> age;

    double mhr1 = 220 - age;
    double mhr2 = 208 - 0.7 * age;
    double mhr3 = 207 - 0.7 * age;

    cout << "Sugerencias de MHR basadas en diferentes fórmulas:" << endl;
    cout << "Fórmula 1: MHR = " << mhr1 << endl;
    cout << "Fórmula 2: MHR = " << mhr2 << endl;
    cout << "Fórmula 3: MHR = " << mhr3 << endl;

    double smallestMHR = min(min(mhr1, mhr2), mhr3);
    double largestMHR = max(max(mhr1, mhr2), mhr3);

    cout << "Rango sugerido de MHR: De " << smallestMHR << " a " << largestMHR << endl;

    return 0;
}