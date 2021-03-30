#include "Toyota.h"
#include "Car.h"
#include <stdio.h>

Toyota::Toyota()
{
	this->fuelCapacity = 70;
	this->fuelConsumption = 75;
}

Toyota::~Toyota()
{
	this->fuelCapacity = 0;
	this->fuelConsumption = 0;
}
int Toyota::FuelCapacity()
{
	return this->fuelCapacity;
}
int Toyota::FuelConsumption()
{
	return this->fuelConsumption;
}
int Toyota::AverageSpeed(Weather condition)
{
	switch (condition)
	{
	case(1): return 60; break;// rain
	case(2):return 80; break;// sunny
	case(3): return 30; break;// snow
	default:
		break;
	}
}
void Toyota::Print()
{
	printf("Toyota/n");
}