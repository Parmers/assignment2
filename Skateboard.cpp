#include "Skateboard.h"

Skateboard::Skateboard() {
    setBrand("Blind");
    setModel("deck");
}

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double mileage) {
    double mileage = rand() % 5;
    mileage /= 10;
    if ((time/60) > 25 && (time/60) < 250)
    {
        // if time is more than 25 minutes and less than 250 minutes, add random miliage 
        double random = rand() % 1 + (time/3); 
        mileage += random;
    } 
    
    return mileage;
}

string Skateboard::toString()
{
    return "-> Skateboard\n" + Vehicle::toString();
}
