//
// Created by James Hondros 10/03/2019.
//

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    string myEngineSize;
    double numberOfEngines; //Added member data

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 string engineSize, double numberOfEngines = 1.0);

    virtual ~Jet();
    string getEngineSize();
    void setEngineSize(string engineSize);
    virtual double mileageEstimate(double time);
    virtual string toString();
};

