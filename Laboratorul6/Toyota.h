#pragma once
#include "Car.h"
class Toyota :
    public Car
{
    int fuelCapacity;
    int fuelConsumption;
public:
    Toyota();
    ~Toyota();
    int FuelCapacity();
    int FuelConsumption();
    int AverageSpeed(Weather condition);
    void Print();
};

