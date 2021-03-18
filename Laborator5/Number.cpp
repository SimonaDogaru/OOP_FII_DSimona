#include "Number.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Number::Number(const char* value, int base)
{
	this->base = base;
	this->digits = 0;
	this->nr = 0;
	for (int i = 0; i < strlen(value); i++)
	{
		switch (value[i])
		{
		case('A'): {
			nr = nr * 100 + 10;
			this->digits = this->digits + 2;
			break;
		}
		case('B'): {
			nr = nr * 100 + 11;
			this->digits = this->digits + 2;
			break;
		}
		case('C'): {
			nr = nr * 100 + 12;
			this->digits = this->digits + 2;
			break;
		}
		case('D'): {
			nr = nr * 100 + 13;
			this->digits = this->digits + 2;
			break;
		}
		case('E'): {
			nr = nr * 100 + 14;
			this->digits = this->digits + 2;
			break;
		}
		case('F'): {
			nr = nr * 100 + 15;
			this->digits = this->digits + 2;
			break;
		}
		default: { nr = nr * 10 + (value[i] - '0'); this->digits++;

			break;
		}
		}
		printf("%d\n", nr);
	}
}
/*Number::~Number()
{
	
}*/
int Number:: GetDigitsCount() // returns the number of digits for the current number
{
	return this->digits;
}
int Number::GetBase() // returns the current base
{
	return this->base;
}
