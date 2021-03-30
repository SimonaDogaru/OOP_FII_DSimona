#pragma once
#include "Car.h"
class Mercedes :
    public Car
{
    int fuelCapacity;
    int fuelConsumption;
public:
    Mercedes();
    ~Mercedes();
    int FuelCapacity();
    int FuelConsumption();
    int AverageSpeed(Weather condition);
    void Print();
};

