#pragma once
class Car
{
public:
	virtual int FuelCapacity() = 0;
	virtual int FuelConsumption() = 0;
	virtual int AverageSpeed(int condition) = 0;
};

