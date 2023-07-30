#include "truckClass.h"
#include "truckFactory.h"
#include "engineFactory.h"
#include "engineClass.h"
#include "wheelsFactory.h"
#include "wheelsClass.h"

Truck truckFactory() {

	const int MaxFuel = 350;

	Truck isuzu(MaxFuel);

	Engine engine = engineFactory();

	isuzu.setEngine(engine);

	//wheels creates with func wheels factory
	Wheels wheels = wheelsFactory();

	//set wheels in a car
	isuzu.setWheels(wheels);
	
	int maxLoad = 44;

	isuzu.setMaxLoad(maxLoad);

	return isuzu;
}