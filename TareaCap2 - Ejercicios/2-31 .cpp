#include <iostream>
using namespace std;

int main() {
    double totalMilesDriven;
    double costPerGallon;
    double averageMilesPerGallon;
    double parkingFeesPerDay;
    double tollsPerDay;

    cout << "Ingrese la cantidad total de millas conducidas por día: ";
    cin >> totalMilesDriven;

    cout << "Ingrese el costo por galón de gasolina: $";
    cin >> costPerGallon;

    cout << "Ingrese el promedio de millas por galón de su vehículo: ";
    cin >> averageMilesPerGallon;

    cout << "Ingrese los gastos de estacionamiento por día: $";
    cin >> parkingFeesPerDay;

    cout << "Ingrese los peajes por día: $";
    cin >> tollsPerDay;

    double dailyCost = (totalMilesDriven / averageMilesPerGallon) * costPerGallon + parkingFeesPerDay + tollsPerDay;

    cout << "El costo diario de conducir al trabajo es: $" << dailyCost << endl;

    return 0;
}