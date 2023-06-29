#include "../header/car_class.h"\

double Car::Engine::get_fuel_rate() {
	return fuel_rate;
}

void Car::set_fuel_amount(int amount) {
	fuel_amount = amount;
}

double Car::ride(double fuel_rate) {
	return (fuel_amount/fuel_rate) * 100;
}

void Car::set_engine(int capacity) {
	engine_capacity = capacity;
}