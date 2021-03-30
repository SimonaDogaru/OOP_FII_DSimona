#include "Mercedes.h"
#include "Car.h"
#include <stdio.h>

Mercedes::Mercedes()
{
	this->fuelCapacity = 60;
	this->fuelConsumption = 65;
}

Mercedes::~Mercedes()
{
	this->fuelCapacity = 0;
	this->fuelConsumption = 0;
}
int Mercedes::FuelCapacity()
{
	return this->fuelCapacity;
}
int Mercedes::FuelConsumption()
{
	return this->fuelConsumption;
}
int Mercedes::AverageSpeed(Weather condition)
{
	switch (condition)
	{
	case(1): return 55; break;// rain
	case(2):return 75; break;// sunny
	case(3): return 30; break;// snow
	default:
		break;
	}
}
void Mercedes::Print()
{
	printf("Mercedes/n");
}
