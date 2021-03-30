#include "Ford.h"
#include "Car.h"
#include <stdio.h>

Ford::Ford()
{
	this->fuelCapacity = 40;
	this->fuelConsumption = 45;
}

Ford::~Ford()
{
	this->fuelCapacity = 0;
	this->fuelConsumption = 0;
}
int Ford::FuelCapacity()
{
	return this->fuelCapacity;
}
int Ford::FuelConsumption()
{
	return this->fuelConsumption;
}
int Ford::AverageSpeed(Weather condition)
{
	switch (condition)
	{
	case(1): return 45; break;// rain
	case(2):return 65; break;// sunny
	case(3): return 30; break;// snow
	default:
		break;
	}
}
void Ford::Print()
{
	printf("Ford/n");
}
