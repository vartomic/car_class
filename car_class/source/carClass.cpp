#include <iostream>
#include "carClass.h"
#include "engineClass.h"
#include "wheelsClass.h"
#include "vehicleClass.h"

//set fuel amount
void Car::setFuelAmount(int amount) {
	fuelAmount = amount;
}

//cout double car distance
void Car::ride() {
	auto engineConsumption = carEngine.getFuelConsumption();
	auto brakingRate = carWheels.getBrakingRate();
	std::cout << ((fuelAmount/engineConsumption) * 100)/brakingRate << std::endl;
}

//set engine
void Car::setEngine(Engine engine) {
	carEngine = engine;
}

//set wheels
void Car::setWheels(Wheels wheels) {
	carWheels = wheels;
}