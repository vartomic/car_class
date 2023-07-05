#include "carFactory.h"
#include "carClass.h"
#include "engineFactory.h"
#include "engineClass.h"
#include "wheelsFactory.h"
#include "wheelsClass.h"

Car carFactory() {

	//max fuel
	const int MaxFuel = 100;

	//car with max fuel param
	Car renoLogan(MaxFuel);

	//engine creates with func engine factory
	Engine engine = engineFactory();

	//set engine in a car
	renoLogan.setEngine(engine);

	//wheels creates with func wheels factory
	Wheels wheels4 = wheelsFactory();

	//set wheels in a car
	renoLogan.setWheels(wheels4);

	return renoLogan;

};
