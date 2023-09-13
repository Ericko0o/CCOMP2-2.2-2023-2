#include<iostream>
#include<string>
#include "vehiculo.h"
using namespace std;
int main(){
    MotorVehicle Vehicle1("GTI 141", "Gasoline", 2012, "Red", 2000);
    cout<<"Car details:"<<endl;
    Vehicle1.displayCarDetails();

    Vehicle1.setColor("Grey");
    Vehicle1.setFuelType("Diesel");
    
    cout<<"New Car Details:"<<endl;
    Vehicle1.displayCarDetails();
}