#include "NoteStudent.h"
#include <string.h>
#include <stdio.h>

void NoteStudent:: setNume(char nume[30])
{
	strcpy_s(this->nume, 30, nume);
}

char* NoteStudent::getNume()
{
	return this->nume;
}
void NoteStudent::setNotaMate(float val)
{
	if (val >= 1 && val <= 10)
		this->NotaMate = val;
	else
		printf("Nota incorecta");
}
float NoteStudent::getNotaMate()
{
	return this->NotaMate;
}
void NoteStudent::setNotaEng(float val)
{
	if (val >= 1 && val <= 10)
		this->NotaEng = val;
	else
		printf("Nota incorecta");
}
float NoteStudent::getNotaEng()
{
	return this->NotaEng;
}
void NoteStudent::setNotaIstorie(float val)
{
	if (val >= 1 && val <= 10)
		this->NotaIstorie = val;
	else
		printf("Nota incorecta");
}
float NoteStudent::getNotaIstorie()
{
	return this->NotaIstorie;
}
float Media(float val1, float val2, float val3)
{
	float x = val1 + val2 + val3;
	x = x / 3;
	return x;
}
/*NoteStudent::NoteStudent() /// Am incercat sa fac un constructor dar imi apare eroare daca este mai mult de un "this ->"
{							
	memset(this->nume, 0, 30);
	this->getNotaMate() = 0;
	this->getNotaEng() = 0;
	this->getNotaIstorie() = 0;
}*/