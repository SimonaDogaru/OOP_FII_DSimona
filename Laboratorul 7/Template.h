#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


template <typename T>
int  comparCresc(T v1, T v2)
{
	if (v1 < v2)
		return 1;
	else
		return 0;
}
template <typename T>
int  comparDescresc(T v1, T v2)
{
	if (v1 < v2)
		return 1;
	else
		return 0;
}
template <typename T>
int comparEgal(T v1, T v2)
{
	if (v1 == v2)
		return 1;
	return 0;
}
template <typename T>
class Vector {
	T* vectorelem;
	int index;
	int totMemorie;
	T aux;/// pentru sort, oriunde am ne voie de o inteschimbare
public:
	Vector()
	{
		printf("se apeleaza constructorul\n");
		this->index = 0;
		this->vectorelem = (T*)malloc(0 * sizeof(T));
		this->totMemorie = 1;
	}
	
	void puch(T elem)
	{
		this->index++;
		if (this->index  >= this->totMemorie)
		{
			this->totMemorie = 2*this->totMemorie;
			this->vectorelem = (T *)realloc(this->vectorelem,  this->totMemorie * sizeof(T));

		}
		this->vectorelem[this->index] = elem;
	
	}
	T pop()
	{
		return this->vectorelem[index];
	}
	void remove(int poz)
	{
		for (int i = poz; i < this->index; i++)
		{
			this->vectorelem[i] = this->vectorelem[i + 1];
		}
		this->index--;
	}
	void insert(T elem,int poz)
	{
		this->index++;
		for (int  i = this->index ; i >=poz; i--)
		{
			if (i == this->index)
			{
				if (this->index >= this->totMemorie)
						{
							this->totMemorie = 2 * this->totMemorie;
							this->vectorelem = (T*)realloc(this->vectorelem, this->totMemorie * sizeof(T));

						}
			}
			this->vectorelem[i] = this->vectorelem[i-1];
		}
		this->vectorelem[poz] = elem;
		
		
	}
	/*void sort(T(*callback)(T, T))
	{
		int m
		for (int i = 1; i < this->index; i++)// apare o eroare la for 
		{
				if (callback == nullptr)
				{
					 m = this->vectorelem[i] < this->vectorelem[i + 1];
				}
				else
					m = callback(this->vectorelem[i], this->vectorelem[i + 1]);
				if (m == 0)
				{
					this->aux = this->vectorelen[i];
					this->vectorelem[i] = this->vectorelem[i + 1];
					this->vectorelem[i + 1] = this->aux;
				}
		}
	
	}
	*/
	const T* get( int poz )
	{
		if (poz <= this->index & poz>0 )
			return   &this->vectorelem[poz];
		printf("Nu exista aceast element in vector\n");
	}
	void set(int poz, T elem)
	{
		if (poz <= this->index && poz > 0)
		{
			this->vectorelem[poz] = elem;
		}
	}
	int count()
	{
		return this->index;
	}
	int firstIndexOf(T elem, T(*callback) (T, T ) )
	{
		for (int i = 0; i < this->index; i++)
		{
			if (callback != nullptr)
			{
				if (callback(this->vectorelem[i], elem) == 1)
					return i;
			}
			else
			{
				if (this->vectorelem[i] == elem)
					return i;
			}
		}
	}
	void Print()
	{
		//printf("%d \n", this->index);
		for (int i = 1; i <= this->index; i++)
		{
				printf("%d ", this->vectorelem[i]);
		}
		printf("\n");
	}
};