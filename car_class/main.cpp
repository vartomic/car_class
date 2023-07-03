#include <iostream>

#include "header/carClass.h"
#include "header/engineClass.h"
#include "header/engineFactory.h"
#include "header/carFactory.h"
#include "header/carTestOrganization.h"

int main()
{
    Car newCar = carFactory();

    carTestOrganization(newCar);

    return 0;

}
