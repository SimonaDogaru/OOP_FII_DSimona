#include <iostream>
#include <stdio.h>
#include "Template.h"


using namespace std;


float operator"" _Kelvin(unsigned long long int a)
{
    float Celsius;
    Celsius = a - 273.15;
    return Celsius;
}

float operator"" _Fahrenheit(unsigned long long b)
{
    return (b - 32) / 1.8;
}
int main() {

    float a = 300_Kelvin;

    float b = 120_Fahrenheit;
    cout << a << " " << b;
    cout << endl;
    Vector <int> obj1;
    obj1.puch(2);
    obj1.puch(3);
    obj1.puch(4);
    obj1.puch(4);
    obj1.puch(4);
    cout<<obj1.pop()<<endl;
    obj1.remove(2);
    cout << obj1.pop()<<endl;
    obj1.Print();
    obj1.insert(43, 1);
    obj1.Print();
  //  obj1.sort(comparCresc);
    obj1.Print();
    cout << obj1.get(2) << endl;
   // const int& y = obj1.get(2);
    obj1.set(3, 78);
    obj1.Print();
    cout << obj1.count() << endl;
    cout << obj1.firstIndexOf(4, comparEgal);

  
    return 0;

}