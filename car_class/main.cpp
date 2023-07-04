#include <iostream>

#include "carClass.h"
#include "engineClass.h"
#include "engineFactory.h"
#include "carFactory.h"
#include "carTestOrganization.h"

int main()
{
    Car newCar = carFactory();

    carTestOrganization(newCar);

    return 0;

}
