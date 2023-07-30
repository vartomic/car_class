#include <iostream>

#include "carClass.h"
#include "engineClass.h"
#include "engineFactory.h"
#include "carFactory.h"
#include "carTestOrganization.h"
#include "vehicleClass.h"

int main()
{
    Car newCar = carFactory();

    carTestOrganization(newCar);

    return 0;

}
