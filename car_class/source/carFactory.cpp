#include "carFactory.h"
#include "engineClass.h"
#include "carClass.h"
#include "engineFactory.h"

Car carFactory() {

	const int MaxFuel = 100;

	Car renoLogan(MaxFuel);

	Engine engine = engineFactory();

	renoLogan.setEngine(engine);

	return renoLogan;

};
