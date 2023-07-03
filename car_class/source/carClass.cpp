#include <iostream>
#include "../header/carClass.h"
#include "../header/engineClass.h"

void Car::setFuelAmount(int amount) {
	fuelAmount = amount;
}

//void Car::ride() {
//	auto consumption = getFuelConsumption();
//	std::cout << (fuelAmount/) * 100;
//}

Engine Car::setEngine(Engine engine) {
	carEngine = engine;
	return carEngine;
}