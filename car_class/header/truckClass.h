#pragma once

#include "vehicleClass.h"
#include "engineClass.h"
#include "wheelsClass.h"


class Truck: public Vehicle {

private:

	Engine truckEngine;

	Wheels truckWheels;

	int fuelAmount;
	int maxFuel;
	int truckMaxLoad;

public:
	
	Truck(const int fuelMax) {
		maxFuel = fuelMax;
		fuelAmount = 0;
	};

	void setEngine(Engine truckEngine);

	void setWheels(Wheels truckWheels);

	void setFuelAmount(int fuelAmount);

	void setMaxLoad(int truckMaxLoad);

	void ride();

};
