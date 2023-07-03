#pragma once

class Engine {

private:
	double engineConsumption;

public:

	Engine(const double FuelConsumption) {
		engineConsumption = FuelConsumption;
	};

	double getFuelConsumption();
};