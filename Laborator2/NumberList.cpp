#include "NumberList.h"

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
		this->count++;
		this->numbers[count]
	}
}
