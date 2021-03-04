#include "Math.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int Math::Add(int val1, int val2)
{
	return val1 + val2;

}
int Math::Add(int val1, int val2, int val3)
{
	return val1 + val2 + val3;
}
int Math::Add(double val1, double val2)
{
	return (int)val1 + val2;// merge si cu (int) si fara 
}
int Math::Add(double val1, double val2, double val3)
{
	return (int)val1 + val2 + val3;

}
int Math::Mul(int val1, int val2)
{
	return val1 * val2;
}
int Math:: Mul(int val1, int val2, int val3)
{
	return val1 * val2 * val3;
}
int Math::Mul(double val1, double val2)
{
	return (int) val1 * val2;
}
int Math::Mul(double val1, double val2, double val3)
{
	return  val1 * val2 * val3;
}
int Math::Add(int count, ...)
{
	va_list val;
	int sum = 0;

	va_start(val, count);
	for (int i = 0; i < count; i++)
	{
		sum += va_arg(val, int);
	}
	va_end(val);
	return sum;
}
char* Math::Add( const char* text1, const char* text2)
{
	if (text1 == nullptr || text2 == nullptr)
		return nullptr;
	char* sizetextAdd = (char*) malloc(strlen(text1 )+ strlen (text2)+ 1);
	memset(sizetextAdd, 0, strlen(text1) + strlen(text2) + 1);
	memcpy(sizetextAdd, text1, strlen(text1));
	memcpy(sizetextAdd + strlen(text1), text2, strlen(text2));
	return sizetextAdd;
}
