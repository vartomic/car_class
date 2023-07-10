#pragma once

class Vehicle {

private:
	//max weight
	int maxWeight;

	//vehicle mass withoud load
	int massWithoutLoad;

	//number of passangers seats
	int passangerSeats;

	//max weight of passengers
	int massPassengers;

	//weight of cargo
	int massCargo;

public:

	//weight of passengers
	int massPassengers();

	//weight of cargo
	int massCargo();
};