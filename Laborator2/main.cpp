#include "NoteStudent.h"
#include "Global.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	NoteStudent Ob1;
	NoteStudent Ob2;
	NoteStudent Ob3;
	Ob1.setNume((char*)"Studet_1");
	Ob1.setNotaMate(9);
	Ob1.setNotaEng(9);
	Ob1.setNotaIstorie(9);
	Ob2.setNume((char*)"Studet_2");
	Ob2.setNotaMate(8);
	Ob2.setNotaEng(8);
	Ob2.setNotaIstorie(8);
	Ob3.setNume((char*)"Studet_3");
	Ob3.setNotaMate(7);
	Ob3.setNotaEng(7);
	Ob3.setNotaIstorie(7);
	printf("Nota la mate a %s este %f\n", Ob1.getNume(), Ob1.getNotaMate());
	printf("Nota la engleza a %s este %f\n", Ob1.getNume(), Ob1.getNotaEng());
	printf("Nota la istorie a %s este %f\n", Ob1.getNume(), Ob1.getNotaIstorie());
	printf("Nota la mate a %s este %f\n", Ob2.getNume(), Ob2.getNotaMate());
	printf("Nota la engleza a %s este %f\n", Ob2.getNume(), Ob2.getNotaEng());
	printf("Nota la istorie a %s este %f\n", Ob2.getNume(), Ob2.getNotaIstorie());
	printf("Nota la mate a %s este %f\n", Ob3.getNume(), Ob3.getNotaMate());
	printf("Nota la engleza a %s este %f\n", Ob3.getNume(), Ob3.getNotaEng());
	printf("Nota la istorie a %s este %f\n", Ob3.getNume(), Ob3.getNotaIstorie());
	printf("Valoarea comparatiei a numelor este : %d\n", ComparNume(&Ob1, &Ob2));
	printf("Valoarea comparatiei a notelor la mate este : %d\n", ComparNoteMate(&Ob1, &Ob2));
	printf("Valoarea comparatiei a notelor la engleza este : %d\n", ComparNoteEng(&Ob1, &Ob2));
	printf("Valoarea comparatiei a notelor le istorie este : %d\n", ComparNoteIstorie(&Ob1, &Ob2));
	//printf("Valoarea comparatiei mediilor  este : %d\n", ComparMedia(&Ob1, &Ob2));
	///printf("media este: %f\n", Ob1.Media(Ob1.getNotaMate(),Ob1.getNotaEng(),Ob1.getNotaIstorie()));



	system("pause");
	return 0;

}