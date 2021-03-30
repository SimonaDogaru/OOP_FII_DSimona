#pragma once
#include "Car.h"
class Ford :
    public Car
{
    int fuelCapacity;
    int fuelConsumption;
public:
    Ford();
    ~Ford();
    int FuelCapacity();
    int FuelConsumption();
    int AverageSpeed(Weather condition);
    void Print();
};

