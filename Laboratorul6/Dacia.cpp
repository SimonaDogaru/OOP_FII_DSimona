#include "Dacia.h"
#include "Car.h"
#include <stdio.h>

Dacia::Dacia()
{
	this->fuelCapacity = 30;
	this->fuelConsumption = 35;
}
Dacia::~Dacia()
{
	this->fuelCapacity = 0;
	this->fuelConsumption = 0;
}
int Dacia::FuelCapacity()
{
	return this->fuelCapacity;
}
int Dacia::FuelConsumption()
{
	return this->fuelConsumption;
}
int Dacia::AverageSpeed(Weather condition)
{
	switch (condition)
	{
	case(1): return 40; break;// rain
	case(2):return 60; break;// sunny
	case(3): return 30; break;// snow
	default:
		break;
	}
}
void Dacia::Print()
{
	printf("Dacia/n");
}