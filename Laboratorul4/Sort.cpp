#include "Sort.h"
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

Sort::Sort(int nr_elemente, int min_element, int max_element)
{
	this->vector = (int*)(malloc(nr_elemente * sizeof(int)));
	this->Nr_elemente = nr_elemente;
	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < nr_elemente; i++) {
		this->vector[i] = min_element + rand() % (min_element - max_element + 1);
	}
}
Sort::Sort(int* vectorExistent, int nr_elemente)
{
	this->vector = (int*)(malloc(nr_elemente * sizeof(int)));
	this->Nr_elemente = nr_elemente;
	for (int i = 0; i < nr_elemente; i++)
	{
		this->vector[i] = vectorExistent[i];
	}
}

Sort::Sort(int count, ...)
{
	
	this->vector = (int*)(malloc(count * sizeof(int)));
	this->Nr_elemente = count;
	va_list val;
	va_start(val,count);
	for (int i = 0; i < count; i++)
	{
		this->vector[i] = va_arg(val, int);
	}
	va_end(val);
}

Sort::Sort(char* c)
{
	printf("constructor char\n");
	////printf("strlen c este %d\n", strlen(c));
	int nr_nr = 0;
	char* p;
	this->vector = (int*)(malloc(strlen(c)* sizeof(int)));
	//printf("memoria alocata este : %d", sizeof(this -> vector));
	p = strtok_s(c,(const char*)strlen(c),(char**)",");
	while (p!=NULL)
	{
		int val=0;
		for (int j = 0; j < strlen(p); j++)
		{
			val = val * 10 + (p[j] - '0');
		}
		printf("%d ", val);
		this->vector[nr_nr]= val;
		nr_nr++;
		p = strtok_s(NULL, 0, (char**)",");
	}
	
	this->Nr_elemente = nr_nr;


}
Sort::Sort() : vector(new int[6]{ 1, 2, 3, 4, 5, 6 }) {
}
void Sort::InsertSort(bool ascendent)///daca lasam ascendent = false nu functioneaza hmm..
{
	int i, key, j;
	if (ascendent == true)
	{
		for (i = 1; i < this->Nr_elemente; i++)
		{
			key = this->vector[i];
			j = i - 1;
			while (j >= 0 && this->vector[j] > key)
			{
				this->vector[j + 1] = this->vector[j];
				j = j - 1;
			}
			this->vector[j + 1] = key;
		}
	}
	else
	{
		for (i = 1; i < this->Nr_elemente; i++)
		{
			key = this->vector[i];
			j = i - 1;
			while (j >= 0 && this->vector[j] < key)
			{
				this->vector[j + 1] = this->vector[j];
				j = j - 1;
			}
			this->vector[j + 1] = key;
		}
	}
}
void QuichSortAscendent(int vector[],int low, int high)
{
	int i, j, aux, pivot;
	i = low; j = high;
	pivot = vector[(low + high) / 2];
	while (i<=j)
		{
			while (vector[i]<pivot)
					i++;
			while (vector[j]>pivot)
					j--;
			if (i <= j)
			{
				aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
				i++; j--;

			}
		}
		if (low < j)
			QuichSortAscendent(vector,low, j);
		if (i < high)
			QuichSortAscendent(vector, i, high);
}
void QuichSortDescendent(int vector[],int low, int high)
{
	int i, j, aux, pivot;
	i = low; j = high;
	pivot = vector[(low + high) / 2];
	while (i<j)
		{
			while (vector[i]>pivot)
					i++;
			while (vector[j]<pivot)
					j--;
			if (i < j)
			{
				aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
				i++; j--;

			}
		}
		if (low < j)
			QuichSortDescendent(vector,low, j);
		if (i < high)
			QuichSortDescendent(vector, i, high);
}
void Sort:: QuickSort(bool ascendent)
{
	if (ascendent == true)
		QuichSortAscendent(this->vector, 0, this->Nr_elemente);
	else
		QuichSortDescendent(this->vector, 0, this->Nr_elemente);
}
void Sort::BubbleSort(bool ascendent )
{
	int ok, i, aux;
	if (ascendent == true)
	{
		do
		{
			ok = 1;
			for (i = 0; i < this->Nr_elemente - 1; i++)
			{
				if (this->vector[i] > this->vector[i + 1])
				{
					ok = 0;
					aux = this->vector[i];
					this->vector[i] = this->vector[i + 1];
					this->vector[i + 1] = aux;

				}
			}
		} while (ok == 0);
	}
	else
	{
		do
		{
			ok = 1;
			for (i = 0; i < this->Nr_elemente - 1; i++)
			{
				if (this->vector[i] < this->vector[i + 1])
				{
					ok = 0;
					aux = this->vector[i];
					this->vector[i] = this->vector[i + 1];
					this->vector[i + 1] = aux;

				}
			}
		} while (ok == 0);
	}
	
	
}

void Sort:: Print()
{
	for (int i = 0; i <this->Nr_elemente; i++)
	{
		printf("%d  ", this->vector[i]);
	}
	printf("\n");
}

int Sort::GetElementsCount()
{
	return this->Nr_elemente;
}

int Sort:: GetElementFromIndex(int index) 
{
	return this->vector[index];
}