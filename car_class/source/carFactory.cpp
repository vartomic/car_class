#include "../header/carFactory.h"
#include "../header/engineClass.h"
#include "../header/carClass.h"
#include "../header/engineFactory.h"

Car carFactory() {

	const int MaxFuel = 100;

	Car renoLogan(MaxFuel);

	Engine engine = engineFactory();

	renoLogan.setEngine(engine);

	return renoLogan;

};
