#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int transform(char Numar[200])
{
	int i, nr=0;
	for (i = 0; i < strlen(Numar); i++)
	{
		int x = Numar[i] - '0';
		nr = nr * 10 + x;
	}
	return nr;
}
int main()
{
	FILE* f;
	if (fopen_s(&f, "in.txt", "r") != 0)
	{
		printf("Fisierul nu a fost deschis\n");
	}
	else
	{
		int suma = 0;
		char Numar[200];
		while (fgets(Numar, 199, f))
		{
			Numar[strlen(Numar)-1 ] = '\0';
			/// codul are o problema, la ultimul nr din fisier nu este citita si ultima cifra
			//am folosit aceste lini pentru a testa daca  transformarea este corecta 
			/*printf("sirul din fisier este: %s\n", Numar);
			int nr = transform(Numar);
			printf(" nr din fisier este : %d\n", nr);*/
			suma += transform(Numar);
		}
		printf("Suma nr din fisier este : %d\n", suma);
	}

	system("pause");
	return 0;
}