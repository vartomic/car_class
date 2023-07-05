#include "wheelsFactory.h"
#include "wheelsClass.h"

Wheels wheelsFactory() {

	//set braking coefficient
	const double brakingRate = 1.2;

	//create wheels
	Wheels wheels4(brakingRate);

	return wheels4;
}