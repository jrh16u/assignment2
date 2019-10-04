//
// Created by James Hondros 10/03/2019.
//

#include "Motorcycle.h"

Motorcycle::Motorcycle() {
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("VTx");
}

Motorcycle::Motorcycle(string brand, string model, string fuelType, string engineSize) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
}

Motorcycle::~Motorcycle() = default;

string Motorcycle::getEngineSize() {
    return myEngineSize;
}

void Motorcycle::setEngineSize(string engineSize) {
    if (engineSize == "unknown" || engineSize == "small" ||
        engineSize == "medium" || engineSize == "grande") {
        myEngineSize = engineSize;
    } else {
        myEngineSize = "unknown";
    }

}

double Motorcycle::mileageEstimate(double time) {
    double mileage = 30 * time;
    if (fuelType == "electricity") {
        mileage += mileage / 2;
    }
    return mileage;
}

string Motorcycle::toString() {
    return "-> Motorcycle\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}
