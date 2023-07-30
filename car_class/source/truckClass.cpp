#include <iostream>
#include "truckClass.h"
#include "engineClass.h"

void Truck::setEngine(Engine engine) {
	truckEngine = engine;
}

void Truck::setWheels(Wheels wheels) {
	truckWheels = wheels;
}

void Truck::setFuelAmount(int amount) {
	fuelAmount = amount;
}

void Truck::setMaxLoad(int maxLoad) {
	truckMaxLoad = maxLoad;
}

void Truck::ride() {
	auto engineConsumption = truckEngine.getFuelConsumption();
	std::cout << ((fuelAmount / engineConsumption) * 100) / truckMaxLoad;
}

