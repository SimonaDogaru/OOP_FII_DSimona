#include "Mazda.h"
#include "Car.h"
#include <stdio.h>

Mazda::Mazda()
{
	this->fuelCapacity = 50;
	this->fuelConsumption = 55;
}

Mazda::~Mazda()
{
	this->fuelCapacity = 0;
	this->fuelConsumption = 0;
}
int Mazda::FuelCapacity()
{
	return this->fuelCapacity;
}
int Mazda::FuelConsumption()
{
	return this->fuelConsumption;
}
int Mazda::AverageSpeed(Weather condition)
{
	switch (condition)
	{
	case(1): return 50; break;// rain
	case(2):return 70; break;// sunny
	case(3): return 30; break;// snow
	default:
		break;
	}
}
void Mazda::Print()
{
	printf("Mazda/n");
}