#include "../header/engineFactory.h"
#include "../header/engineClass.h"

Engine engineFactory() {

	const double FuelConsumption = 5.7;

	Engine engine(FuelConsumption);

	return engine;
}