#pragma once

#include "../header/engineClass.h"

class Car {

private:

	Engine carEngine = setEngine(carEngine);
	int fuelAmount;


public:

	Car(const int FuelMax) {
		fuelAmount = 0;
	};

	Engine setEngine(Engine carEngine);

	void setFuelAmount(int fuelAmount);

	//void ride();

};