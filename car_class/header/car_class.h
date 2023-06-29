#pragma once

class Car {

private:

	int engine_capacity = 0;
	int fuel_amount = 0;

public:

	Car(const int fuel_m) {
		const int fuel_max = fuel_m;
		fuel_amount = 0;
	};

	class Engine {

	private:
		//fuel consumption
		double fuel_rate = 5.7;

	public:

		// get value of fuel consum.
		double get_fuel_rate();
	};

	void set_engine(int engine_capacity);

	void set_fuel_amount(int fuel_amount);
	
	double ride(double fuel_rate);

};