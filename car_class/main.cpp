#include "header/car_class.h"

int main()
{
    Car Reno_Logan(90);

    Reno_Logan.set_fuel_amount(60);

    Reno_Logan.set_engine(1598);

    Car::Engine engine;

    engine.get_fuel_rate();

    Reno_Logan.ride(5.7);

}
