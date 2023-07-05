#include "engineFactory.h"
#include "engineClass.h"

Engine engineFactory() {

	const double FuelConsumption = 5.7;

	//engine with fuel consumption param
	Engine engine(FuelConsumption);

	return engine;
}