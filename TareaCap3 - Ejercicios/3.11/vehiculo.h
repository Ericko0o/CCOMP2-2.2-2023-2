#include <iostream>
#include <iostream>

class MotorVehicle{
public:
    MotorVehicle(std::string mk, std::string fuelt, int yofm, std::string col, int enc):
      partMake(mk), fuelType(fuelt), yearOfManufacture(yofm),color(col), engineCapacity(enc){  
    }
    void setMake(std::string mk) {
        partMake=mk;
    }
    void setFuelType(std::string fuelt){
        fuelType=fuelt;
    }
    void setYearPOfManufacture(int yofm){
        if (yofm>0){
            yearOfManufacture=yofm;
        }
    }
    void setColor(std::string col){
        color=col;
    }
    void setEngineCapacity(int engc){
        if(engc>0){
            engineCapacity=engc;
        }
    }
    std::string getMake() const{
        return partMake;
    }
    std::string getFuelType() const{
        return fuelType;
    }
    int getYearOfManufacture(){
        return yearOfManufacture;
    }
    std::string getColor()const{
        return color;
    }
    int getEngineCapacity()const{
        return engineCapacity;
    }
    void displayCarDetails()const{
        std::cout<<"Make:"<<partMake<<std::endl;
        std::cout<<"Fuel type:"<<fuelType<<std::endl;
        std::cout<<"Year of manufacture:"<<yearOfManufacture<<std::endl;
        std::cout<<"Color:"<<color<<std::endl;
        std::cout<<"Engine capacity:"<<engineCapacity<<std::endl;
    }
private:
   std::string partMake;
   std::string fuelType;
   int yearOfManufacture{0};
   std::string color;
   int engineCapacity{0};
};