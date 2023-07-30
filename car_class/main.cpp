#include <iostream>

#include "carClass.h"
#include "engineClass.h"
#include "engineFactory.h"
#include "carFactory.h"
#include "carTestOrganization.h"
#include "vehicleClass.h"
#include "truckClass.h"
#include "truckFactory.h"

int main()
{
    Car newCar = carFactory();
    carTestOrganization(newCar);

    Truck newTruck = truckFactory();
    carTestOrganization(newTruck);

    return 0;

}
