//
//Created by James Hondros 10/03/2019.
//

#include "Vehicle.h"

class Skateboard : public Vehicle {

private:
	int myGearCount;

public:
	explicit Skateboard(string brand, string model, int gearCount = 1);

	virtual ~Skateboard();
	int getGearCount();
	void setGearCount(int myGearCount);
	virtual double mileageEstimate(double time);

	virtual string toString();
};
