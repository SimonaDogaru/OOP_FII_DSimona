#include <iostream>
#include "Math.h"
#include <stdio.h>

using namespace std;
int main()
{
	int x, y, z;
	char sir1, sir2;
	Math Obj1;
	cout << "x= "; cin >> x;
	cout << "y="; cin >> y;
	cout << "z="; cin >> z;
	cout << "x+y = " << Obj1.Add(x, y)<<"\n";
	//cout << " mul double = " << Obj1.Mul(1.5, 2, 2);
	// Daca vedeti aceste exercitiu inaint sa il rezolv cu trebuie, regret ca imi i-a atat demult timp , mai sunt cateva lucruri pe care sa le inteleg 
	// Va multumesc frumos pentru rabdare

	system("pause");
	return 0;

}