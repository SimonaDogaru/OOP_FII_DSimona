#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/*
* erori:
* 1 trebuie T aux , nu int aux// aux trebuie a fie de acelasi tip ca lista
* 2 aux  = lista [i] ,nu aux == lista [i]
* 3 cand facem swap() intre elemente, scriem si ok = false;
* 4 la parametri trebuie scris T* lista, nu T lista! de ce ? pentru ca list1 din sortare la transmite adresa de un de incepe lista de elemente, deci parametrul trebuie sa fie de tip pionter pentru a retine o adresa
* 5 la for trebuie parcurs pana la penultimul element, nu pana la  nr de elemnte plus 1
*/

template<class T>
void sortare(T lista, int nrElem)
{
	int  aux;
	bool ok = false;
	while (ok==false)
	{
		ok = true;
		for (int i = 0; i <= nrElem ; i++)
		{
			if (lista[i] > lista[i + 1])
			{
				aux == lista[i];
				lista[i] = lista[i + 1];
				lista[i + 1] = aux;
				
			}
		}
	}
	
}

int main()
{
	int list1[100],n;
	printf("n= ");
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> list1[i];
	}
	sortare<int>(list1, n);
	for (int i = 0; i < n; i++)
	{
		std::cout << list1[i] << " ";
	}

	return 0;
}
