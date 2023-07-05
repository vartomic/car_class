#pragma once

class Wheels {

private:
	double brakingRate;

public:

	//empty constructor car wheels
	Wheels() {};

	//wheels constructor with param
	Wheels(const double wheelsBrakingRate) {
		brakingRate = wheelsBrakingRate;
	};

	//return braking efficiency coefficient
	double getBrakingRate();
};