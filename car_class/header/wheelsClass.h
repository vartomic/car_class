#pragma once

class Wheels {

private:
	double carWheelsDiameter;

public:

	Wheels() {};

	Wheels(const double wheelsDiameter) {
		carWheelsDiameter = wheelsDiameter;
	};

	double getWheelsDiameter();
};