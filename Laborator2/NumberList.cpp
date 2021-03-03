#include "NumberList.h"
#include <stdio.h>

void NumberList::Init()
{
	this->count = 0;
}
bool NumberList::Add(int x)
{
	if (count >= 10)
	{
		return false;
	}
	else
	{
		this->numbers[count] = x;
		this->count++;
	}
}
void NumberList::Sort()
{
	int i, ultim = count-1, aux ;
	while (ultim>0)
	{
		for (i = 0; i < ultim; i++)
		{
			if (numbers[i] > numbers[i + 1])
			{
				aux = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = aux;


			}

		}
		ultim--;
	}
}
void NumberList::Print()
{
	int i;
	for (i = 0; i < count; i++)
	{
		printf("%d ", numbers[i]);

	}
	printf("\n");
}

