#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using  namespace std;
char m[300][300];
int dx, dy, D,y,x;
void LineLow(int x1, int y1, int x2, int y2)
{
	dx = x2 - x1;
	dy = y2 - y1;
	int yi = 1;
	if (dy < 0)
	{
		yi = -1;
		dy = -dy;
	}
	D = (2 * dy) - dx;
	y = y1;
	for (x = x1; x <= x2; x++)
	{
		m[x][y] = 'a';
		if (D > 0)
		{
			y += yi;
			D = D + (2 * (dy - dx));
		}
		else
			D = D + 2 * dy;
	}

}
void LineHigh(int x1, int y1, int x2, int y2)
{
	dx = x2 - x1;
	dy = y2 - y1;
	int xi = 1;
	if (dx < 0)
	{
		xi = -1;
		dx = -dx;
	}
	D = (2 * dx) - dy;
	x = x1;
	for (y = y1; y <= y2; y++)
	{
		m[x][y] = 'a';
		if (D > 0)
		{
			x = x + xi;
			D = D + (2 * (dx - dy));
		}
		else
			D = D + 2 * dx;
	}
}
void drawLine(int x1, int y1, int x2, int y2)
{
	if (abs(y2 - y1) < abs(x2 - x1))
	{
		if (x1 > x2)
			LineLow(x2, y2, x1, y1);
		else
			LineLow(x1, y1, x2, y2);
	}
	else
	{
		if (y1 > y2)
			LineHigh(x2, y2, 1, y1);
		else
			LineHigh(x1, y1, x2, y2);
	}
}

int main()
{
	drawLine(1, 1, 6, 6);
	int i, j;
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 7; j++)
		{
			if (m[i][j] != 'a')
				m[i][j] = 32;
		}

	}for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
			cout << m[i][j];
		cout << endl;
		
	}

	system("pause");
	return 0;
}


