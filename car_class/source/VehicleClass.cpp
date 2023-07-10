#include "vehicleClass.h"

int Vehicle::massPassengers() {
	massPassengers = passengerSeats * 68;
	return massPassengers;
}

int Vehicle::massCargo() {
	massCargo = maxWeight - massWithoutLoad - massPassengers;
	return massCargo;
}