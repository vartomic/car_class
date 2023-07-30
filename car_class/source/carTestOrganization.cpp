#include "carTestOrganization.h"
#include "carClass.h"

#include "vehicleClass.h"

//testing func
void carTestOrganization(Vehicle& testCar) {
	
	//set fuel in a car
	testCar.setFuelAmount(100);

	//cout double car distance
	testCar.ride();
}