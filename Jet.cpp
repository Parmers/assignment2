#include "Jet.h"

Jet::Jet() {
    setNumberOfEngines(1);
    setBrand("Boeing");
    setModel("777");
    setFuelType("jet");
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setNumberOfEngines(numberOfEngines);
    setFuelType(fuelType);
    
}

void Jet::setNumberOfEngines(int engines) {
    numberOfEngines = engines;
}

double Jet::mileageEstimate(double mileage) {
    double mileage = rand() % 100 + 40;
    
    if (fuelType == "Rocket" && getNumberOfEngines() > 2) {
    //if fuel type is Rocket and number of engines is more than 2, increase mileage by 5.5% per engine
        mileage += (mileage * .055) * numberOfEngines;
    } 
    return mileage;
}

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}


Jet::~Jet() = default;

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Size: " + to_string(numberOfEngines);
}
