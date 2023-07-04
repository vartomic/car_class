#include "engineFactory.h"
#include "engineClass.h"

Engine engineFactory() {

	const double FuelConsumption = 5.7;

	Engine engine(FuelConsumption);

	return engine;
}