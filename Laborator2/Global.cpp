#include "Global.h"
#include<string.h>

int ComparNume(NoteStudent* ob1, NoteStudent* ob2)
{
	return strcmp(ob1->getNume(), ob2->getNume());
}
int ComparNoteMate(NoteStudent* ob1, NoteStudent* ob2)
{
	if (ob1->getNotaMate() < ob2->getNotaMate())
		return -1;
	if (ob1->getNotaMate() == ob2->getNotaMate())
		return 0;
	if (ob1->getNotaMate() > ob2->getNotaMate())
		return 1;

}
int ComparNoteEng(NoteStudent* ob1, NoteStudent* ob2)
{
	if (ob1->getNotaEng() < ob2->getNotaEng())
		return -1;
	if (ob1->getNotaEng() == ob2->getNotaEng())
		return 0;
	if (ob1->getNotaEng() > ob2->getNotaEng())
		return 1;

}
int ComparNoteIstorie(NoteStudent* ob1, NoteStudent* ob2)
{
	if (ob1->getNotaIstorie() < ob2->getNotaIstorie())
		return -1;
	if (ob1->getNotaIstorie() == ob2->getNotaIstorie())
		return 0;
	if (ob1->getNotaIstorie() > ob2->getNotaIstorie())
		return 1;

}
/*int ComparMedia(NoteStudent* ob1, NoteStudent* ob2)
{
	if (ob1->Media(ob1->getNotaMate(),ob1->getNotaEng(), ob1->getNotaIstorie()) < ob2->Media(ob2->getNotaMate(), ob2->getNotaEng(), ob2->getNotaIstorie()))
		return -1;
	if (ob1->Media(ob1->getNotaMate(), ob1->getNotaEng(), ob1->getNotaIstorie()) == ob2->Media(ob2->getNotaMate(), ob2->getNotaEng(), ob2->getNotaIstorie()))
		return 0;
	if (ob1->Media(ob1->getNotaMate(), ob1->getNotaEng(), ob1->getNotaIstorie()) > ob2->Media(ob2->getNotaMate(), ob2->getNotaEng(), ob2->getNotaIstorie()))
		return 1;

}*/

