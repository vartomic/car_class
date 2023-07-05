#pragma once

class Engine {

private:

	//fuel consumption
	double engineConsumption;

public:

	//empty engine constructor
	Engine() {};

	//engine constructor with parameter fuel consumption,
	//which sets private class parameter engineConsumption
	Engine(const double FuelConsumption) {
		engineConsumption = FuelConsumption;
	};

	//function returns fuel consumption param 
	double getFuelConsumption();
};