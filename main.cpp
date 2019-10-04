//
//James Hondros 10/03/2019
//
#include <iostream>
#include "Car.h"
#include "Bicycle.h"
#include "Jet.h"
#include "Skateboard.h"
#include "Motorcycle.h"

void printVehiclesRoster(Vehicle **vehicles, int size);

int main() {
	srand(1);
    std::cout << "Driving simulator" << std::endl;
    int size = 11;
    int capacity = 12;
    Vehicle **vehiclesArray = new Vehicle *[capacity];

    vehiclesArray[0] = new Car();
    vehiclesArray[1] = new Bicycle("eTAP", "P5X");
    vehiclesArray[2] = new Bicycle("R&A", "Dogma F8", 5);
    vehiclesArray[3] = new Car("Tesla", "T2", "electricity", "large");
    vehiclesArray[4] = new Bicycle("Mizuno", "Wave", 10);
    vehiclesArray[5] = new Car("BMW", "X5", "diesel", "grande");
    vehiclesArray[6] = new Jet("DD", "JET", "Rocket", "ya know", 4);
    vehiclesArray[7] = new Jet("dd", "jet", "Rocket", "dfds", 6);
	vehiclesArray[8] = new Skateboard("faf", "dfadf");
	vehiclesArray[9] = new Skateboard("aksh", "dfadsf", 6);
	vehiclesArray[10] = new Motorcycle("BMW", "But", "electricity", "large");

    printVehiclesRoster(vehiclesArray, size);

    if (vehiclesArray != 0) { // If it is not a null pointer
        // do not use nullptr. It is not supported on linprog
        for (int i = 0; i < size; i++) {
            delete vehiclesArray[i];
        }
        delete[] vehiclesArray;
    }
    return 0;
}

void printVehiclesRoster(Vehicle **vehicles, int size) {
    double simulatedDistance = 130;
    for (int i = 0; i < size; i++) {
        cout << i << " " << vehicles[i]->toString() << endl;
        cout << "\tWould travel: "
             << vehicles[i]->mileageEstimate(simulatedDistance) << " miles in "
             << simulatedDistance << " seconds" << endl;
    }
}
