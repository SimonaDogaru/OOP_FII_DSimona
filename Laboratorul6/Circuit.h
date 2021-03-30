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
	int CarNr;
	int CurrentItem;
	int Lenght;
	Weather cond;
	Car** vectorFinish, **vectorNoFinish ;
	float rezultate[100];
	int n=0, y=0;
public:
	
	Circuit();
	~Circuit();
	void SetLenght(int i);
	void SetWeather(Weather i);
	void AddCar(Car* p);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

