#include <stdio.h>
#include <string>
#include <fstream>
#include <map>
#include <queue>
#include <iostream>

using namespace std;

int main()
{
	string ObjString;
	ifstream file1 ("date.txt");
	if (!file1)
	{
		printf("error la deschiderea fisierului: data.txt");
		return 0;
	}
	if (!getline(file1, ObjString)) {
		printf("error la citirea din fisier: input.txt");
		return 0;
	}
	printf("prima linie a fisierului este :%s\n", ObjString.c_str());
	map <string, int> MapCuv;
	string cuv="";
	int j = 0;
	for (int i = 0; i < ObjString.size(); i++)
	{
		if (ObjString[i] !=' ' && ObjString[i] != ',' && ObjString[i] != '.' && ObjString[i] != '!' && ObjString[i] != '?')
		{
			cuv[j] += ObjString[i];
			printf("caracterul %d ==  %c \n", i, ObjString[i]);
		}
		else
		{
			printf("here 1");
			printf(" un cuvant este :%s\n", cuv.c_str());
			if (cuv != "")
			{
				MapCuv[cuv]++;
				cuv = "";
				j = 0;
			}
			
		}
	}

	return 0;

}