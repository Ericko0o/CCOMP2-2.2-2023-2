#include <iostream>
using namespace std;

int main() {
    double weightInPounds;
    double heightInInches;
    
    cout << "Ingresa tu peso en libras: ";
    cin >> weightInPounds;
    
    cout << "Ingresa tu altura en pulgadas: ";
    cin >> heightInInches;
    
    double bmi = (weightInPounds * 703) / (heightInInches * heightInInches);
    
    cout << "Tu BMI es: " << bmi << endl;
    
    cout << "BMI VALUES" << endl;
    cout << "Underweight: less than 18.5" << endl;
    cout << "Normal: between 18.5 and 24.9" << endl;
    cout << "Overweight: between 25 and 29.9" << endl;
    cout << "Obese: 30 or greater" << endl;
    
    return 0;
}