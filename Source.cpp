#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
void SortareCuv (char matriceCh[20][20], int NrCuv)
{
	int i,j;
	char cuv[20];
	for ( i = 0; i <NrCuv; i++)
	{
		for (j = 1 + i; j < NrCuv; j++)
		{
			if (strlen(matriceCh[i]) < strlen(matriceCh[j]))
			{
				strcpy(cuv, matriceCh[i]);
				strcpy(matriceCh[i], matriceCh[j]);
				strcpy(matriceCh[j], cuv);
			}
			else
				if (strlen(matriceCh[i]) == strlen(matriceCh[j]) && strcmp(matriceCh[i], matriceCh[j]) == -1)
				{
					strcpy(cuv, matriceCh[i]);
					strcpy(matriceCh[i], matriceCh[j]);
					strcpy(matriceCh[j], cuv);
				}

		}

	}
}

int main()
{
	printf(" Nr de cuvinte citie este: ");
	int NrCuv;
	scanf("%d", &NrCuv);///am incercat sa folosesc scanf_s, dar imi aparea eroare cand foloseam scanf_s si strcpy
	printf("Introduceti o propozitie: ");
	char cuvant[20], matriceCh[20][20];
	int counter = 0;
	while (scanf_s("%19s", cuvant, 19))
	{
		printf("Cuvantul citit este: %s\n", cuvant);
		cuvant[strlen(cuvant) ] = '\0';
		strcpy(matriceCh[counter], cuvant);
		counter += 1;
		if (counter >= NrCuv)
			break;
	}
	SortareCuv(matriceCh, NrCuv);
	int i;
	for (i = 0; i < NrCuv; i++)
	{
		printf("cuvantul este %s\n", matriceCh[i]);
	}
	system("pause");
	return 0;
}