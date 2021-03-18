#include <iostream>
#include <stdio.h>
#include "Sort.h";
using namespace std;

int main()
{
	int vectorEX[50],n;
	Sort obj1(5,0,30);
	obj1.Print();
	cout << "n=";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> vectorEX[i];
	}
	Sort obj2((int*)vectorEX, n);
	obj2.Print();
	Sort obj3(7, 1, 2, 3, 4, 5, 6, 7);
	obj3.Print();
	//Sort obj4((char*)"1,2,3,4");
	//obj4.Print();
	obj1.InsertSort(0);
	obj1.Print();
	obj2.QuickSort(1);
	obj2.Print();
	obj3.BubbleSort(0);
	obj3.Print();
	cout<<obj3.GetElementsCount()<<"\n";
	cout << obj3.GetElementFromIndex(0) << "\n";
	system("pause");
	return 0;
}