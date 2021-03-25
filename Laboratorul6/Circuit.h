#pragma once
#include "Car.h";
#include "Dacia.h";
#include "Ford.h";
#include "Mazda.h";
#include "Mercedes.h";
#include "Toyota.h";
#include "Weather.h";
class Circuit
{
	Car** vectorCar;
public:
	void SetLenght(int i);
	void SetWeather(Weather i);
	void AddCar(Car* p);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

