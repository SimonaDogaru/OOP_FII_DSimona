#include "Circuit.h"
#include <stdio.h>
#include <stdlib.h>
#include "Car.h";
#include "Dacia.h";
#include "Ford.h";
#include "Mazda.h";
#include "Mercedes.h";
#include "Toyota.h";
#include "Weather.h";
#include <iostream>

using namespace std;

Circuit::Circuit()
{
	this->CarNr = 0;
	this->CurrentItem = 0;
	this->vectorCar = (Car**)(malloc(CarNr * sizeof(Car*)));

}
Circuit::~Circuit()
{
	this->CurrentItem = 0;
	this->CarNr = 0;
	delete this->vectorCar;
}
/*
* void SetLenght(int i);
	void SetWeather(Weather i);
	void AddCar(Car* p);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
*/
void Circuit::SetLenght(int i)
{
	this->Lenght = i;
}
void Circuit::SetWeather(Weather i)
{
	this->cond = i;
}
void Circuit:: AddCar(Car* p)
{
	this->CarNr++;
	this->vectorCar = (Car**)(realloc((Car**)this->vectorCar,(this->CarNr * sizeof(Car*))));
	this->vectorCar[CarNr] = p;

}
void Circuit::Race()
{
	this->vectorFinish = (Car**)(malloc(this->CarNr * sizeof(Car*)));
	
	for (int i=1; i <= CarNr; i++)
	{	
		int nrLitri =(int) vectorCar[i]->FuelConsumption()* this->Lenght/100;
		if (nrLitri > vectorCar[i]->FuelCapacity())
		{	
			vectorNoFinish[++n] = vectorCar[i];

		}
		else
		{
			vectorFinish[++y] = vectorCar[i];
			rezultate[y] = this->Lenght / vectorCar[i]->AverageSpeed(this->cond);
		}
	}
	for (int i = 1; i <= this->CarNr; i++)
		
	cout << endl;
}
void Circuit::ShowFinalRanks()
{
	int aux,i;
	Car* auxc;
	for (i = 1; i < this->y; i++)
	{
		if (rezultate[i] > rezultate[i + 1])
		{
			aux = rezultate[i];
			rezultate[i] = rezultate[i + 1];
			rezultate[i + 1] = aux;
			auxc = vectorFinish[i];
			vectorFinish[i] = vectorFinish[i + 1];
			vectorFinish[i + 1] = auxc;

		}
	}
	for (i = 1; i <=this->y; i++)
	{
		cout << rezultate[i] << " ";
		vectorFinish[i]->Print();
	}
}
void Circuit::ShowWhoDidNotFinish()
{
	for (int i = 1; i <= this->n; i++)
	{
		vectorNoFinish[i]->Print();
	}
}


