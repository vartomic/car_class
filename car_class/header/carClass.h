#pragma once

#include "engineClass.h"
#include "wheelsClass.h"

class Car {

private:

	//car engine
	Engine carEngine;

	//amount of fuel in a car
	int fuelAmount;

	//max fuel
	int maxFuel;

	//car wheels
	Wheels carWheels;

public:

	//car constructor with max fuel param,
	//fuel amount sets to zero
	Car(const int FuelMax) {
		maxFuel = FuelMax;
		fuelAmount = 0;
	};

	//func sets engine
	void setEngine(Engine carEngine);

	//func set amount of fuel
	void setFuelAmount(int fuelAmount);

	//func sets wheels in a car
	void setWheels(Wheels carWheels);

	// cout double car distance
	void ride();

};