#pragma once
#include "Weather.h"

class Car
{

public:
	virtual int FuelCapacity() = 0;
	virtual int FuelConsumption() = 0;
	virtual int AverageSpeed(Weather condition) = 0;
	virtual void Print()=0;
};

