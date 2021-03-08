#include "Canvas.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

Canvas::Canvas (int width, int height)
{
	char** matrice = (char**)(malloc(height * sizeof(char*)));
	for (int i = 0; i < height; i++)
	{
		matrice[i] = (char*)(malloc(width * sizeof(char)));
	}
	
}
/*void DrawCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i < this->Width; i++)
	{
		for (int j = 0; j < this->Hight; j++)
		{

		}

	}
}
*/
void FillCircle(int x, int y, int ray, char ch);

void DrawRect(int left, int top, int right, int bottom, char ch);

void FillRect(int left, int top, int right, int bottom, char ch);

void SetPoint(int x, int y, char ch);

void DrawLine(int x1, int y1, int x2, int y2, char ch);

void Print(); // shows what was printed

void Clear(); // clears the canvas