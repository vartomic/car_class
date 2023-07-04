#include "wheelsFactory.h"
#include "wheelsClass.h"

Wheels wheelsFactory() {

	const double wheelsDiameter = 14;

	Wheels wheels4(wheelsDiameter);

	return wheels4;
}