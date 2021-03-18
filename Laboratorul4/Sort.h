#pragma once
class Sort
{
    int* vector;
    int Nr_elemente;
    //int numar_elemente;

public:
    Sort(int nr_elemente, int min_element, int max_element);
    Sort();/// nu am inteles foarte bine cum initializez vectorul fara sa am nr de elemente ca paramentru
    Sort(int* vectorExistent, int nr_elemente);
    Sort(int count, ...);
    Sort(char* c);
    
    void InsertSort(bool ascendent = false);

    void QuickSort( bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);
};

