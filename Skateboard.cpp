//
// Created by James Hondros 10/03/1998.
//

#include "Skateboard.h"
#include <cstdlib>


Skateboard::Skateboard(string brand, string model, int gearCount) {
    setBrand(brand);
    setModel(model);
    setGearCount(gearCount);
}

Skateboard::~Skateboard() = default;

int Skateboard::getGearCount() {
    return myGearCount;
}

void Skateboard::setGearCount(int gearCount) {
    myGearCount = gearCount;
}
//Added cases for time requirements
//Attempted to randomize doubles but gave up
double Skateboard::mileageEstimate(double time) {
    double mileage = (rand() % 1);
	if(time > 25 && time < 250)
		mileage += mileage + ((rand() % 1) * time);
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString() + "\n\tGears: " +
           to_string(myGearCount);
}
