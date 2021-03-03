#pragma once
class NoteStudent
{
private:
	char nume[30];
	int NotaMate, NotaEng, NotaIstorie;
public:
	NoteStudent();
	NoteStudent(char* nume, float notaMate, float notaEng, float notaIstorie);
	~NoteStudent();
	void setNume(char nume[30]);/// metoda care va seta numele unui student , deoarece acesta este private
	char* getNume();/// metoda care va returna numere unui student
	void setNotaMate(float val);
	float getNotaMate();
	void setNotaEng(float val);
	float getNotaEng();
	void setNotaIstorie(float val);
	float getNotaIstorie();
	float Media(float val1, float val2, float val3);
};

