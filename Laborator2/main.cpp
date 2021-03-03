#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "NumberList.h"
using namespace std;

int main()
{
	int n;//nr de elemente care vor fi adaugate in vector
	NumberList Obiect1;
	Obiect1.Init();
	printf("n=");
	//cout << "n=";
	///scanf("%d", &n);// de ce nu vrea sa functioneze???
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x;
		//scanf("%d", &x);
		cin >> x;
		Obiect1.Add(x);
	}
	Obiect1.Print();
	Obiect1.Sort();
	Obiect1.Print();
	system("pause");
	return 0;
}