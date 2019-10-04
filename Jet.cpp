//
// Created by James Hondros 10/03/2019.
//

#include "Jet.h"
#include <cstdlib>

Jet::Jet() {
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, string engineSize,
	double numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
}

Jet::~Jet() = default;

string Jet::getEngineSize() {
    return myEngineSize;
}

void Jet::setEngineSize(string engineSize) {
    if (engineSize == "unknown" || engineSize == "small" ||
        engineSize == "medium" || engineSize == "grande") {
        myEngineSize = engineSize;
    } else {
        myEngineSize = "unknown";
    }

}
//Randomization between 40 and 100
//cases for fuel type and number of engines
double Jet::mileageEstimate(double time) {
    double mileage = (rand() % 60) + 40;
    if (fuelType == "Rocket" && numberOfEngines >= 2) {
        mileage += mileage * (.055 * numberOfEngines);
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}

