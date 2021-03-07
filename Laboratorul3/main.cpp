#include <iostream>
#include "Math.h"
#include <stdio.h>

using namespace std;

int main()
{
	int x, y, z;
	double x2, y2, z2;
	char sir1, sir2;
	Math Obj1;
	cout << "x= "; cin >> x;
	cout << "y="; cin >> y;
	cout << "z="; cin >> z;
	cout << "x+y = " << Obj1.Add(x, y)<<"\n";
	cout << "x+y+z = " << Obj1.Add(x, y, z) << "\n";
	cout << "x * y = " << Obj1.Mul(x, y) << "\n";
	cout << "x * y *z = " << Obj1.Mul(x, y, z) << "\n";
	cout << "x2= "; cin >> x2;
	cout << "y2="; cin >> y2;
	cout << "z2="; cin >> z2;
	//cout << Obj1.Add(1.5, 1.0)<<"\n";// daca scriu 1 in loc de 1.0 apare ambiguitate
	cout << "x+y = " << Obj1.Add(x2, y2) << "\n";
	cout << "x+y+z = " << Obj1.Add(x2, y2, z2) << "\n";
	cout << "x * y = " << Obj1.Mul(x2, y2) << "\n";
	cout << "x * y *z = " << Obj1.Mul(x2, y2, z2) << "\n";
	cout << "Add cu parametri variatici  " << Obj1.Add(5, 1, 2, 3, 4, 5) << "\n";
	cout << " Functia care aloca memorie si imbina doua siruri : " << Obj1.Add("a", "na") <<"\n";

	system("pause");
	return 0;

}