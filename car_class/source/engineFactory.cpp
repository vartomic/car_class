#include "engineFactory.h"
#include "engineClass.h"
#include <iostream>

Engine engineFactory() {

	double FuelConsumption;

	std::cout << "Enter engine's fuel consumption: ";

	std::cin >> FuelConsumption;

	//engine with fuel consumption param
	Engine engine(FuelConsumption);

	return engine;
}