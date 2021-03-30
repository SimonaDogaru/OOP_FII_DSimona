#pragma once
#include "Car.h"
class Mazda :
    public Car
{
    int fuelCapacity;
    int fuelConsumption;

public:
    Mazda();
    ~Mazda();
    int FuelCapacity();
    int FuelConsumption();
    int AverageSpeed(Weather condition);
    void Print();
};

