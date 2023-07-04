#pragma once

#include "engineClass.h"
#include "wheelsClass.h"

class Car {

private:

	Engine carEngine;
	int fuelAmount;
	int maxFuel;
	Wheels carWheels;

public:

	Car(const int FuelMax) {
		maxFuel = FuelMax;
		fuelAmount = 0;
	};

	void setEngine(Engine carEngine);

	void setFuelAmount(int fuelAmount);

	void setWheels(Wheels carWheels);

	void ride();

};