#include <iostream>
#include "carClass.h"
#include "engineClass.h"
#include "wheelsClass.h"

void Car::setFuelAmount(int amount) {
	fuelAmount = amount;
}

void Car::ride() {

	Engine carEngine;

	double engineConsumption = carEngine.getFuelConsumption();
	std::cout << (fuelAmount/engineConsumption) * 100;
}

void Car::setEngine(Engine engine) {
	carEngine = engine;
}

void Car::setWheels(Wheels wheels) {
	carWheels = wheels;
}