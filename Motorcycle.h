//
// Created by James Hondros 10/03/2019.
//

#include "PoweredVehicle.h"

class Motorcycle : public PoweredVehicle {

private:
    string myEngineSize;

public:
    Motorcycle();

    explicit Motorcycle(string brand, string model, string fuelType,
                 string engineSize);

    virtual ~Motorcycle();
    string getEngineSize();
    void setEngineSize(string engineSize);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


