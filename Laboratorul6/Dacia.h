#pragma once
#include "Car.h"
class Dacia :
    public Car
{
    int fuelCapacity;
    int fuelConsumption;
public:
    Dacia();
    ~Dacia();
    int FuelCapacity();
    int FuelConsumption();
    int AverageSpeed(Weather condition);
    void Print();
};

